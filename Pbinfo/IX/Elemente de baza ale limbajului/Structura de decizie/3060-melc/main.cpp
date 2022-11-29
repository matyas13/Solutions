#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float v;
    int d;
    cin >> v >> d;
    cout << ceil(d/(v*1000/60));
    return 0;
}
