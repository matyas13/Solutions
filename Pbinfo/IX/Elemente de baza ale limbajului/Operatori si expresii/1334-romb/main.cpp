#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b;
    cin >> a >> b;
    cout << 4*(sqrt((a/2)*(a/2)+(b/2)*(b/2))) <<' ' << (a*b)/2;
    return 0;
}
