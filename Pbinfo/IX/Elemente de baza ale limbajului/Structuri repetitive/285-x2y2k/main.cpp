#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long n,x;
    cin >> n;
    for(long long i=1;i*i<n;i++)
    {
        x=n-(i*i);
        if(i<sqrt(x) && sqrt(x)-(int)sqrt(x)<10e-9)
            cout << i << ' ' << sqrt(x) << endl;
    }
    return 0;
}
