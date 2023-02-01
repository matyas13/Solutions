#include <iostream>

using namespace std;

void solve()
{
    int n, cnt=0;
    char x;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        if(x=='1')
            cnt++;
    }
    if(cnt==0){
        cout << 0 << '\n';
        return;
    }
    if(n/2==cnt){
        cout << cnt << '\n';
        return;
    }
    if(cnt>=n/2){
        cout << 1+n-cnt << '\n';
    }
    else{
        cout << cnt << '\n';
    }
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
