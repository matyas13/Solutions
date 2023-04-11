#include <iostream>

using namespace std;

int main()
{
    long long c,p,a;
    cin >> c >> p;
    a=(c-(p*(p-1)/2))/p;
    if(a<=0)
        cout << c;
    else
        cout << c-(2*a+p-1)*p/2;
    return 0;
}
