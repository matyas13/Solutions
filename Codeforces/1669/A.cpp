#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    if(n<=1399)
        cout << "Division 4\n";
    else if(n<=1599)
        cout << "Division 3\n";
    else if(n<=1899)
        cout << "Division 2\n";
    else
        cout << "Division 1\n";
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
