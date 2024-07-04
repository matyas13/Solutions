#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

ifstream fin("level4_example.in");
ofstream fout("level4_1.out");

vector<char> path;

int X[]={1, -1, 0, 0};
int Y[]={0, 0, -1, 1};
char dir[]={'S', 'W', 'A', 'D'};

int n, m;

void dfs(int x, int y, vector<vector<bool>> &mat, bool &ok) {
    mat[x][y]=true;
    if(path.size()==n*m-2) {
        ok=true;
        return;
    }
    for(int k=0; k<4 && !ok; k++) {
        int tox=x+X[k];
        int toy=y+Y[k];
        if(tox>=0 && tox<n && toy>=0 && toy<m && !mat[tox][toy]) {
            path.push_back(dir[k]);
            dfs(tox, toy, mat, ok);
            if(!ok) {
                path.pop_back();
            }
            mat[tox][toy]=false;
        }
    }
}

int main() {
    int tt;
    fin >> tt;
    while(tt--) {
        fin >> m >> n;
        vector<vector<bool>> INIT(n, vector<bool>(m));
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                char c;
                fin >> c;
                if(c=='X') INIT[i][j]=true;
                else INIT[i][j]=false;
            }
        }
        vector<vector<bool>> mat;
        bool ok=false;
        for(int i=0; i<n && !ok; i++) {
            for(int j=0; j<m && !ok; j++) {
                path.clear();
                mat=INIT;
                ok=false;
                dfs(i, j, mat, ok);
            }
        }

//        for(int i=0; i<n ;i++) {
//            for(int j=0; j<m; j++) {
//                cout << mat[i][j] << ' ';
//            }
//            cout << '\n';
//        }

        for(auto it : path) {
            fout << it;
        }
        fout << '\n';
    }
    return 0;
}