#include <iostream>

using namespace std;

void solve() {
    int a, b , c;
    cin >> a >> b >> c;
    (a+b==c || a+c==b || b+c==a) ? cout << "YES\n" : cout << "NO\n";
    return;
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
