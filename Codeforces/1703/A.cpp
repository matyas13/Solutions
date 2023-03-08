#include <iostream>
#include <cstring>

using namespace std;

void solve() {
    char a[4];
    cin >> a;
    if(stricmp(a,"yes")==0 || stricmp(a,"no")==0)
        cout << "YES\n";
    else
        cout << "NO\n";
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
