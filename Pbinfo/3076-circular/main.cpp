#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n=s.size();
    s=s+s;
    long long x, ans=0;
    for(int i=0;i<n;i++){
        x=stoll(s.substr(i,n));
        ans+=x;
    }
    cout << ans;
    return 0;
}
