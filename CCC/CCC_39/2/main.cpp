#include <iostream>
#include <fstream>
#include <vector>
#include <set>
#include <map>

#define gergo ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

ifstream fin("level2_5.in");
ofstream fout("level2_5.out");

int main() {
    gergo;
    int tt;
    fin >> tt;
    while(tt--) {
        string s;
        fin >> s;
        int minbal=0, minle=0, maxfel=0, maxjobb=0;
        int dirx=0, diry=0;
        for(int i=0; i<s.size(); i++) {
            if(s[i]=='W') {
                diry++;
                maxfel=max(maxfel, diry);
            }
            else if(s[i]=='S') {
                diry--;
                minle=min(minle, diry);
            }
            else if(s[i]=='A') {
                dirx--;
                minbal=min(minbal, dirx);
            }
            else {
                dirx++;
                maxjobb=max(maxjobb, dirx);
            }
        }
        fout << abs(minbal)+maxjobb+1 << ' ' << abs(minle)+maxfel+1 << '\n';
    }
    return 0;
}