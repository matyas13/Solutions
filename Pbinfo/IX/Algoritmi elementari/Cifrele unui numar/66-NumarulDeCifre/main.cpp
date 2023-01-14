#include <iostream>

using namespace std;

int main()
{
    long long n,ans=0;
    cin >> n;
    do
    {
        ans++;
        n/=10;
    }while(n!=0);
    cout << ans;
    return 0;
}
