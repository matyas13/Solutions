#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    int x;
    cin >> x;
    float pi=4*atan(1);
    cout << fixed << setprecision(3) << sin(pi*x/180) << ' ' << cos(pi*x/180);
    return 0;
}
