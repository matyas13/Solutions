#include <iostream>

using namespace std;

void solve()
{
    int n, s, r;
    cin >> n >> s >> r;
    int a=s-r;
    cout << a << ' ';
    n--;
    while(n>0){
        if(r-a>=n-1){
            r-=a;
            cout << a << ' ';
            n--;
        }
        else
            a--;
    }
    cout << '\n';
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
