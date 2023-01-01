#include <iostream>
#include <math.h>

using namespace std;

typedef long long ll;

int main()
{

    ll n,y,x;
    double k;
    cin >> n;
    for(ll i=1;i*i<n;i++)
    {
        x=i*(i+1)/2;
        y=n-x;
        k=sqrt(8*y+1);
        if((ll)k==k)
        {
            cout << x << ' ' << y;
            return 0;
        }
    }
    cout << "NU";
    return 0;
}

