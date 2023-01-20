#include <iostream>

using namespace std;

int main()
{
    int n,c,ans=0,p=1;
    cin >> n >> c;
    bool ch=false;
    while(n>0){
        if(n%10!=c){
            ans=ans+p*(n%10);
            p*=10;
            ch=true;
        }
        n/=10;
    }
    if(!ch)
        cout << -1;
    else
        cout << ans;
    return 0;
}
