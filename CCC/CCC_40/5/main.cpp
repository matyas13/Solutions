#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

ifstream fin("level5_5.in");
ofstream fout("level5_5.out");

vector<vector<char>> v(200, vector<char>(200, '.'));
int n, m, marad;

bool collide(int state, int i, int j) {
    if(v[i][j]=='X') {
        return true;
    }

    if(state == 0) {

        if(v[i-1][j]=='X' || v[i-1][j+1]=='X' || v[i-1][j+2]=='X' || v[i][j+2]=='X' ||  v[i+1][j+2]=='X' ||
            v[i+1][j+1]=='X' || v[i+1][j]=='X' || v[i+1][j-1]=='X' || v[i][j-1]=='X' || v[i-1][j-1]=='X') {
            return true;
            }
        return false;
    }

    if(v[i-1][j]=='X' || v[i-1][j+1]=='X' || v[i][j+1]=='X' || v[i+1][j+1]=='X' || v[i+2][j+1]=='X' ||
        v[i+2][j]=='X' || v[i+2][j-1]=='X' || v[i+1][j-1]=='X' || v[i][j-1]=='X' || v[i-1][j-1]=='X') {
        return true;
    }
    return false;
}

bool szele(int state, int i, int j) {
    if(state == 0) {
        if(j+2==m || j==m || i+1==n) {
            return true;
        }
        return false;
    }

    if(j+1==m || i+2==n) {
        return true;
    }
    return false;
}

int main() {
    int tt;
    fin >> tt;
    while(tt--) {
        // n = sor, m = oszlop
        int dfgjd;
        fin >> m >> n >> marad;

        vector<vector<char>> tmp(200, vector<char>(200, '.'));
        v = tmp;
        int state = 0; //0 = sor alak, 1 = oszlop alak
        for(int i=1; i<=n; i++) {
            state = 0;
            for(int j=1; j<=m; j++) {
                if(collide(state, i, j)){
                    continue;
                }
                if(marad>1) {
                    if(szele(state, i, j)) {
                        state = 1-state;
                        if(szele(state, i, j)){
                            continue;
                        }
                    }
                }

                if(state == 0) {
                    v[i][j]=v[i][j+1]='X';
                    marad--;
                } else {
                    v[i][j]=v[i+1][j]='X';
                    marad--;
                }

            }
        }

        for(int i=1; i<=n; i++) {
            for(int j=1; j<=m; j++) {
                fout << v[i][j];
            }
            fout << '\n';
        }
        fout << '\n';
    }

}