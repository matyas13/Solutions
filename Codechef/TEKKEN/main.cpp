#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int x=min(b, c);
        b-=x;
        c-=x;
        if(b==0){
            a-=c;
        }
        else{
            a-=b;
        }
        if(a>0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
