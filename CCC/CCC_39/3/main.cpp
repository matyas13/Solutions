#include <iostream>
#include <fstream>
#include <vector>
#include <set>
#include <map>

#define gergo ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

ifstream fin("level3_5.in");
ofstream fout("level3_5.out");

int main() {
    int tt;
    fin >> tt;
    while(tt--) {
        int n, m;
        fin >> m >> n;
        vector<vector<bool>> INIT(n, vector<bool>(m));
        for(int i=0; i<n; i++) {
            for(int j = 0; j < m; j++) {
                char c;
                fin >> c;
                if (c == 'X') INIT[i][j] = true;
                else INIT[i][j] = false;
            }
        }


        string s;
        fin >> s;
        int cnt;
        bool MENJKI=false;
        for(int i=0; i<n && !MENJKI; i++) {
            for(int j=0; j<m && !MENJKI; j++) {
                bool ok=true;
                cnt=1;
                vector<vector<bool>> mat=INIT;
                int x=i, y=j;
                mat[x][y]=true;
                for(int k=0; k<s.size(); k++) {
                    if(s[k]=='W') x--;
                    if(s[k]=='S') x++;
                    if(s[k]=='A') y--;
                    if(s[k]=='D') y++;
                    if(x<0 || x==n || y<0 || y==m || mat[x][y]==true) {
                        ok=false;
                        break;
                    }
                    cnt++;
                    mat[x][y]=true;
                }
                if(ok && cnt==n*m-1) {
                    fout << "VALID\n";
                    MENJKI=true;
                }
            }
        }

        if(!MENJKI) {
            fout << "INVALID\n";
        }

    }
    return 0;
}