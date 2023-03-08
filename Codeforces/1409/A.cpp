#include <iostream>

using namespace std;

void solve()
{
    long long a, b;
    cin >> a >> b;
    if(a>b)
        swap(a,b);
    long long p=(b-a)/10;
    a=a+p*10;
    if(a%b==0)
        cout << p << endl;
    else
        cout << p+1 << endl;
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
