#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long double ans=0,x;
    for(int i=1;i<=n;i++)
    {
        cin >> x;
        ans=ans+1/x;
    }
    cout << fixed << setprecision(2) << n/ans;
    return 0;
}
