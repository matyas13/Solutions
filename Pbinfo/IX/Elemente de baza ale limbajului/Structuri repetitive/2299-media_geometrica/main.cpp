#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    int n,x;
    cin >> n;
    long long pr=1;
    for(int i=1;i<=n;i++)
    {
        cin >> x;
        pr=pr*x;
    }
    float h=1.0/n;
    cout << fixed << setprecision(2) << pow(pr,h);
    return 0;
}
