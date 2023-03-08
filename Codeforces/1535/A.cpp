#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    vector < int > v(4);
    while(t--){
        for(int i=0; i<4; i++){
            cin >> v[i];
        }
        int m1=max(v[0], v[1]), m2=max(v[2], v[3]);
        sort(v.begin(), v.end());
        cout << (v[2]==min(m1, m2) ? "YES\n" : "NO\n");
    }
    return 0;
}
