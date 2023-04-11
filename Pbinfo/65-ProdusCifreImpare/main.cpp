#include <iostream>

using namespace std;

int main()
{
    long long ans=1,n;
    cin >> n;
    bool check=false;
    while(n>0){
        if(n%2==1){
           ans*=n%10;
           check=true;
        }
        n/=10;
    }
    if(!check)
        cout << -1;
    else
        cout << ans;
    return 0;
}
