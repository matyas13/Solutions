#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a[4];
    for(int i=0;i<4;i++)
        cin >> a[i];

    string s;
    cin >> s;
    int ans=0;
    for(int i=s.size()-1; i>=0; i--){
        ans+=a[s[i]-'1'];
    }
    cout << ans;
    return 0;
}
