#include <iostream>

using namespace std;

int main()
{
    int n,ans=0;
    string str;
    cin >> n;
    while(n--){
        cin >> str;
        (str[1]=='+') ? ans++ : ans--;
    }
    cout << ans;
    return 0;
}
