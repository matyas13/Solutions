#include <iostream>

using namespace std;

void solve()
{
    int n, i=0;
    string s;
    cin >> n >> s;
    bool app[26]={0};
    while(i<n){
        if(!app[s[i]-'A']){
            char x=s[i];
            app[s[i]-'A']=true;
            while(i<n && s[i]==x)
                i++;
        }
        else{
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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
