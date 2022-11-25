#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a;
    cin >> a;
    cout << (int)((3*(a*a+a*a*a*a)/(a*a+a*a*a*a+sqrt(a*a+a*a*a*a))+sqrt(a*a+a*a*a*a)));
    return 0;
}
