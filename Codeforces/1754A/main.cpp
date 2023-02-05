#include <iostream>
#include <string>

using namespace std;

void solve()
{
    string s;
    int n;
    cin >> n >> s;
    if(s[s.size()-1]=='Q'){
        cout << "NO\n";
        return;
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]=='Q')
            cnt++;
        else
            cnt--;
        if(cnt<0)
            cnt=0;
    }
    if(cnt==0)
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
