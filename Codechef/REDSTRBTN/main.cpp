#include <iostream>

using namespace std;

void solve()
{
    int x, y, z;
    cin >> x >> y >> z;
    int sum=x+y+z;
    if(sum-3<=2)
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
