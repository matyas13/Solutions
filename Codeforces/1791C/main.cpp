#include <iostream>
#include <string>

using namespace std;

void solve()
{
    int n,cnt=0;
    string s;
    cin >> n >> s;
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1])
            cnt+=2;
        else
            break;
    }
    if(cnt<=n)
        cout << n-cnt << '\n';
    else
        cout << n << '\n';
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
