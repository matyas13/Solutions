#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

ifstream fin("level6_1.in");
ofstream fout("level6_1.out");

vector<vector<char>> v(200, vector<char>(200, '.'));
int n, m, marad, meret;

bool collide(int state, int i, int j) {
    if(v[i][j]=='X') {
        return true;
    }

    if(state == 0) {

        if(v[i][j-1]=='X') return true;
        if(v[i][j+meret]=='X') return true;
        for(int k=j-1; k<=j+meret; k++) {
            if(v[i-1][k]=='X' || v[i+1][k]=='X') {
                return true;
            }
        }

        return false;
    }

    if(v[i-1][j]=='X') return true;
    if(v[i+meret][j]=='X') return true;
    for(int k=i-1; k<=i+meret; k++) {
        if(v[k][j-1]=='X' || v[k][j+1]=='X') {
            return true;
        }
    }
    return false;
}

bool szele(int state, int i, int j) {
    if(state == 0) {
        if(j+meret==m || m-j<meret-1 || i+1==n) {
            return true;
        }
        return false;
    }

    if(j+1==m || n-i<meret-1) {
        return true;
    }
    return false;
}

void back(int state) {

    for(int ss=0; ss<2; ss++) {
        state = ss;
        bool ok=false;
        for(int i=1; i<=n && !ok; i++) {
            back(state);
            for(int j=1; j<=m && !ok; j++) {

                if(collide(state, i, j)){
                    continue;
                }

                if(szele(state, i, j)) {
                    state = 1-state;
                    if(szele(state, i, j)){
                        continue;
                    }
                }

                if(state == 0) {
                    for(int k=0; k<meret; k++) {
                        v[i][k+j]='X';
                    }
                    marad--;
                } else {
                    for(int k=0; k<meret; k++) {
                        v[i+k][j]='X';
                    }
                    marad--;
                }
                if(marad==0) ok=true;
            }
        }
    }
}

int main() {
    int tt;
    fin >> tt;
    while(tt--) {
        // n = sor, m = oszlop
        fin >> m >> n >> marad >> meret;

        vector<vector<char>> tmp(200, vector<char>(200, '.'));
        v = tmp;
        int state = 0; //0 = sor alak, 1 = oszlop alak
        for(int i=1; i<=n; i++) {
            back(state);
            // for(int j=1; j<=m && !ok; j++) {
            //
            //     if(collide(state, i, j)){
            //         continue;
            //     }
            //
            //     if(szele(state, i, j)) {
            //         state = 1-state;
            //         if(szele(state, i, j)){
            //             continue;
            //         }
            //     }
            //
            //     if(state == 0) {
            //         for(int k=0; k<meret; k++) {
            //             v[i][k+j]='X';
            //         }
            //         marad--;
            //     } else {
            //         for(int k=0; k<meret; k++) {
            //             v[i+k][j]='X';
            //         }
            //         marad--;
            //     }
            //     if(marad==0) ok=true;
            // }
        }

        for(int i=1; i<=n; i++) {
            for(int j=1; j<=m; j++) {
                fout << v[i][j];
            }
            fout << '\n';
        }
        // break;
        fout << '\n';
    }

}