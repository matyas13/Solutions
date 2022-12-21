#include <iostream>
#include <math.h>

using namespace std;

typedef long long ll;

int main()
{
    int n;
    ll x,k;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        k=cbrt(x);
        if(k*k*k==x)
            cout << "DA\n";
        else
            cout << "NU\n";
    }
    return 0;
}
