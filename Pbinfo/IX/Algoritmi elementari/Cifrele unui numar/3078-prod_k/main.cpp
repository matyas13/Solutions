#include <iostream>

using namespace std;

int main()
{
    long long n,k,ans=1;
    cin >> n >> k;
    bool ch=false;
    while(n>0){
        if(n%10!=k){
            ans*=n%10;
            ch=true;
        }
        n/=10;
    }
    if(!ch)
        cout << 0;
    else
        cout << ans;
    return 0;
}
