#include <iostream>

using namespace std;

string s="314159265358979323846264338327";

void solve()
{
    string s2;
    cin >> s2;
    for(int i=0; i<s2.size(); i++){
        if(s2[i]!=s[i]){
            cout << i << '\n';
            return;
        }
    }
    cout << s2.size() << '\n';
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
