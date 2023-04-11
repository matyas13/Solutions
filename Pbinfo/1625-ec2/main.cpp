#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    float a,b,c,delt;
    cin >> a >> b >> c;
    delt=b*b-4*a*c;
    if(delt<0)
        cout << "Nu are solutii reale";
    else if(delt==0)
        cout << fixed << setprecision(2) <<  "Radacina dubla " << -b/2*a;
    else
    {
        b=-b;
        delt=sqrt(delt);
        cout << fixed << setprecision(2) << (b+delt)/(2*a) << ' ' << (b-delt)/(2*a);
    }

    return 0;
}
