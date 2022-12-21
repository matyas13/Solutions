#include <iostream>
#include <math.h>

using namespace std;

typedef long long ll;

int main()
{
    int n;
    ll x;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        if(sqrt(x)-(int)sqrt(x)<1e-9)
            cout << "DA\n";
        else
            cout << "NU\n";
    }
    return 0;
}
