#include <iostream>

using namespace std;

int main()
{
    long long n,p=1;
    int ans=-1;
    cin >> n;
    while(p<=n)
    {
        p=p<<1;
        ans++;
    }
    cout << ans;
    return 0;
}
