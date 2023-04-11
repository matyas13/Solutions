#include <iostream>

using namespace std;

int main()
{
    int n,ans=0,p=1;
    cin >> n;
    while(n>0){
        ans=ans+p*(n/10%10);
        p*=10;
        ans=ans+p*(n%10);
        p*=10;
        n/=100;
    }
    cout << ans;
    return 0;
}
