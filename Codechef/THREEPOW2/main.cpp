#include <iostream>
#include <string>

using namespace std;

void solve()
{
    int n, cnt=0;
    string s;
    cin >> n >> s;
    for(int i=0; i<n; i++){
        if(s[i]=='1')
            cnt++;
    }
    if(s=="10" || s=="1"){
        cout << "NO\n";
    }
    else if(cnt<=3)
        cout << "YES\n";
    else
        cout << "NO\n";
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
