#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n,cnt=0,sum=0,x;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        if(x%2==0)
        {
            sum+=x;
            cnt++;
        }
    }
    cout << fixed << setprecision(2) << 1.0*sum/cnt;
    return 0;
}
