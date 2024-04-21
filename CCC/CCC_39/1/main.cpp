#include <iostream>
#include <fstream>
#include <vector>
#include <set>
#include <map>

#define gergo ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

ifstream fin("level1_5.in");
ofstream fout("level1_5.out");

int main() {
    gergo;
    int tt;
    fin >> tt;
    while(tt--) {
        string s;
        fin >> s;
        map<char, int> mp;
        for(int i=0; i<s.size(); i++) {
            mp[s[i]]++;
        }
        fout << mp['W'] << ' ' << mp['D'] << ' ' << mp['S'] << ' ' << mp['A'] << '\n';
    }
    return 0;
}