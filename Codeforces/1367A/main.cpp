#include <iostream>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i+=2){
        cout << s[i];
    }
    cout << s[s.size()-1];
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
