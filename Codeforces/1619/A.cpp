#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    while(t--){
        cin >> s;
        int n=s.size();
        cout << ((n%2!=0) ? "NO\n" : s.substr(0,n/2)==s.substr(n/2,n/2) ? "YES\n" : "NO\n");
    }
    return 0;
}
