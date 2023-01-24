#include <iostream>
#include <algorithm>

using namespace std;

void solve()
{
    int n, x, cntp=0,cnt=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        if(x==1)
            cntp++;
        else
            cnt++;
    }
    cout << cnt + (cntp+1)/2 << '\n';
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
