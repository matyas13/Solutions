#include <iostream>

using namespace std;

void solve()
{
    int n, mini=1000000001, maxi=-1, x;
    cin >> n;
    for(int i=0; i<n; ++i){
        cin >> x;
        if(x<mini)
            mini=x;
        if(x>maxi)
            maxi=x;
    }
    cout << maxi-mini << '\n';
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
