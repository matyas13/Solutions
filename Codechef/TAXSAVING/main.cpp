#include <iostream>

using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;
    cout << x-y << '\n';
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