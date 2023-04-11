#include <iostream>

using namespace std;

int main()
{
    int n,k,ans=0;
    cin >> n;
    k=n%10;
    do{
        if(n%10==k)
            ans++;
        n/=10;
    }while(n>0);
    cout << ans;
    return 0;
}
