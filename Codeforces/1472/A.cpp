#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int a, b, n, cnt=1;
        cin >> a >> b >> n;
        while(a%2==0){
            cnt*=2;
            a/=2;
        }
        while(b%2==0){
            cnt*=2;
            b/=2;
        }
        if(cnt>=n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
