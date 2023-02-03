#include <iostream>
#include <string>

using namespace std;

void solve()
{
    string s;
    int x=0,y=0,n;
    cin >> n >> s;
    for(int i=0;i<n;i++){
        if(s[i]=='L')
            x--;
        else if(s[i]=='R')
            x++;
        else if(s[i]=='U')
            y++;
        else
            y--;
        if(x==1 && y==1){
            cout << "YES\n";
            return;
        }
    }
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
