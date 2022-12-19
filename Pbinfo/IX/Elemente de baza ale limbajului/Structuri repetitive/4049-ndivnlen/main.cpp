#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n,i=0,m;
    cin >> n;
    m=n;
    while(m>0)
    {
        i++;
        m/=10;
    }
    cout << n;
    for(int j=i+1;j<=n;j++)
        cout << 0;
    return 0;
}
