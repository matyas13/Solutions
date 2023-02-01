#include <iostream>

using namespace std;

void solve()
{
    int x, y, z;
    cin >> x >> y >> z;
    if(x<y && x<z)
        cout << "ALICE\n";
    else if(y<x && y<z)
        cout << "BOB\n";
    else
        cout << "CHARLIE\n";
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
