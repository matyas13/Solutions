#include <iostream>

using namespace std;

int first(int n)
{
    while(n>9)
        n/=10;
    return n;
}

int main()
{
    int n,k,ans=0;
    cin >> n;
    k=first(n);
    do
    {
        if(n%10==k)
            ans++;
        n/=10;
    }while(n>0);
    cout << ans;
    return 0;
}
