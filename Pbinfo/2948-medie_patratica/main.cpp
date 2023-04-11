#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long double sum=0,x;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        sum=sum+x*x;
    }
    cout << fixed << setprecision(2) << sqrt(sum/n);
    return 0;
}
