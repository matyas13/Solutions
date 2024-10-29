#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

ifstream fin("level3_5.in");
ofstream fout("level3_5.out");

int main() {
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int tt;
    fin >> tt;
    while(tt--) {
        int m, n, c;
        fin >> m >> n >> c;
        vector<vector<int>> a(n, vector<int>(m));
        int nr=1;
        for(int i=0; i<n; i++) {
            for(int j=0; j+2<m; j+=3) {
                a[i][j]=a[i][j+1]=a[i][j+2]=nr++;
            }
        }


        if(m%3==2) {
            for(int i=0; i+2<n; i+=3) {
                a[i][m-2]=a[i+1][m-2]=a[i+2][m-2]=nr++;
            }
            for(int i=0; i+2<n; i+=3) {
                a[i][m-1]=a[i+1][m-1]=a[i+2][m-1]=nr++;
            }
        }
        if(m%3==1) {
            for(int i=0; i+2<n; i+=3) {
                a[i][m-1]=a[i+1][m-1]=a[i+2][m-1]=nr++;
            }
        }


        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                fout << a[i][j] << ' ';
            }
            fout << '\n';
        }
        fout << '\n';
    }
    return 0;
}