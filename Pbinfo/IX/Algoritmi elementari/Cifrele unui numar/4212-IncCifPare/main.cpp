#include <iostream>

using namespace std;

int main()
{
    int n,p=1,ans=0;
    cin >> n;
    do{
        if(n%2==0)
            ans=ans+p*(n%10+1);
        else
            ans=ans+p*(n%10);
        p*=10;
        n/=10;
    }while(n>0);
    cout << ans;
    return 0;
}
