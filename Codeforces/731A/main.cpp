#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int ans=0;
    char p='a';
    for(int i=0; i<s.size(); i++){

        ans+=min(26-abs(p-s[i]), abs(p-s[i]));
        p=s[i];
    }
    cout << ans;

    return 0;
}
