#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

ifstream fin("level1_5.in");
ofstream fout("level1_5.out");

int main() {
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int tt;
    fin >> tt;
    while(tt--) {
        int a, b;
        fin >> a >> b;
        if(a%3==0) a/=3;
        else b/=3;
        fout << a*b << '\n';
    }
    return 0;
}