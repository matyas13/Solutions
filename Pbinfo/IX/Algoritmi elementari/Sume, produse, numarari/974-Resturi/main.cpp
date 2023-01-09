#include <iostream>

using namespace std;

int main()
{
    long long ans=0,n,k;
    cin >> n >> k;
    ans+=((k-1)*k/2)*(n/k);
    n=n%k;
    ans+=(1+n)*n/2;
    cout << ans;
    return 0;
}
