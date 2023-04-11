#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    double r,pi=4*atan(1.0);
    cin >> r;
    cout << fixed << pi*(r*r) << ' ' << pi*(2*r);
    return 0;
}
