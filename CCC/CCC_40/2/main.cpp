#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

ifstream fin("level2_5.in");
ofstream fout("level2_5.out");

int main() {
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int tt;
    fin >> tt;
    int nr=1;
    while(tt--) {
        nr=1;
        int n, m, c;
        fin >> m >> n >> c;
        m/=3;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                for(int k=0; k<3; k++) {
                    fout << nr << ' ';
                }
                nr++;
            }
            fout << '\n';
        }
        fout << '\n';
    }
    return 0;
}