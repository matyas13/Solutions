#include <iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    if(n%4!=0){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    for(int i=1; i<=n/2; ++i){
        cout << 2*i << ' ';
    }
    for(int i=1; i<n/2; ++i){
        cout << 2*i-1 << ' ';
    }
    cout << (3*n-2)/2 << '\n';
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
