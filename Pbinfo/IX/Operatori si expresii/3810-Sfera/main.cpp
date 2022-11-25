#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    long double pi=M_PI,A,V;
    long long r,a,v;
    cin >> r;
    A=4*pi*r*r;
    V=4*pi*r*r*r/3;
    a=A*100;
    v=V*100;
    cout << a/100 << '.' <<  a/10%10 << a%10 << ' ' << v/100 << '.' << v/10%10 << v%10;
    return 0;
}
