#include <iostream>

using namespace std;

int main()
{
    int n,ans=1;
    cin >> n;
    while(n!=1)
    {
        ans++;
        if(n%2==0)
            n/=2;
        else
            n=n*3+1;
    }
    cout << ans;
    return 0;
}
