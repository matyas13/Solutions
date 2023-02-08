#include <iostream>

using namespace std;

void solve()
{
    int x, y ,n;
    cin >> x >> y >> n;
    if(n-n%x+y<=n)
        cout << n-n%x+y << '\n';
    else
        cout << n-n%x-(x-y) << '\n';
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
