#include <iostream>

using namespace std;

void solve() {
    int a, b, c, d, ans=0;
    cin >> a >> b >> c >> d;
    if(b>a)
        ans++;
    if(c>a)
        ans++;
    if(d>a)
        ans++;
    cout << ans << '\n';
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}