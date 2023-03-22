#include <iostream>

using namespace std;

void solve()
{
    int x, y, z;
    cin >> x >> y >> z;
    if(y*z<x)
        cout << "NO\n";
    else
        cout << "YES\n";
    return;
}

int main()
{
    int n;
    cin >> n;
    while(n--){
        solve();
    }
    return 0;
}
