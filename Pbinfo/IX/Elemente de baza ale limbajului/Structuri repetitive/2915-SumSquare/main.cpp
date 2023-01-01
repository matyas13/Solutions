#include <iostream>
#include <math.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,x;
    cin >> n;
    for(ll i=1;i<=n;i++)
    {
        x=n-i*i;
        if(sqrt(x)==(int)sqrt(x))
        {
            cout << n-x << ' ' << x;
            return 0;
        }
    }
    cout << "NU";
    return 0;
}
