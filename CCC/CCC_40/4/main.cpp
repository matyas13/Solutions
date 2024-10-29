#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

ifstream fin("level4_5.in");
ofstream fout("level4_5.out");

int main() {
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int tt;
    fin >> tt;
    while(tt--) {
        int m, n, c;
        fin >> m >> n >> c;
        vector<vector<char>> a(n, vector<char>(m, '.'));
    // int nr=0;
        for(int i=0; i<n; i+=2) {
            for(int j=0; j+2<m; j+=4) {
                // nr++;
                a[i][j]=a[i][j+1]=a[i][j+2]='X';
            }
        }

        if(m%4==1 || m%4==2) {
            for(int i=0; i+2<n; i+=4) {
                // nr++;
                a[i][m-1]=a[i+1][m-1]=a[i+2][m-1]='X';
            }
        }


        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                fout << a[i][j];
            }
            fout << '\n';
        }
        // break;
        fout <<'\n';
    }
    return 0;
}