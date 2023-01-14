#include <iostream>

using namespace std;

int main()
{
    int n,ans=-1;
    cin >> n;
    do
    {
        if(n%10>ans)
            ans=n%10;
        n/=10;
    }while(n!=0);
    cout << ans;
    return 0;
}
