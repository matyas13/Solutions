#include <iostream>

using namespace std;

int main()
{
    long long n,ans=-1;
    cin >> n;
    do
    {
        if(n%2==0 && n%10>ans)
            ans=n%10;
        n/=10;
    }while(n>0);
    if(ans==-1)
        cout << 10;
    else
        cout << ans;
    return 0;
}
