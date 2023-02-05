#include <iostream>

using namespace std;

bool diff(string s)
{
    char x=s[0];
    for(int i=s.size()-1;i>0;i--){
        if(s[i]!=x)
            return true;
    }
    return false;
}

void solve()
{
    string s;
    int n;
    cin >> n >> s;
    if(!diff(s)){
        cout << -1 << '\n';
        return;
    }
    for(int i=0;i<n;i++){
        if(s[i]=='R'){
            cout << i << '\n';
            return;
        }
    }
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
