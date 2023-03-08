#include <iostream>

using namespace std;

void solve()
{
    int k, p=0;
    cin >> k;
    while(k){
        if(p%3!=0 && p%10!=3)
            k--;
        p++;
    }
    cout << p-1 << '\n';
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
