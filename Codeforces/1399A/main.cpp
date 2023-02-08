#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector < int > v(n);
    for(int i=0; i<n; ++i){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for(int i=1; i<n; ++i){
        if(v[i]-v[i-1]>1){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    return;
}

int main()
{
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }
    return 0;
}
