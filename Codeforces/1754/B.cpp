#include <iostream>

using namespace std;

void solve()
{
    int x,n;
    cin >> n;
    x=n/2;
    if(n%2==0){
        int k=0;
        for(int i=n/2;i>=1;i--){
            cout << i << ' ' << n-k << ' ';
            k++;
        }
    }
    else{
        cout << x+1 << ' ';
        x+=2;
        for(int i=1;i<=n/2;i++){
            cout << i << ' ' << x << ' ';
            x++;
        }
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
