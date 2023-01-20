#include <iostream>

using namespace std;

int f(int x)
{
    int fx=0;
    while(x>0){
        fx=fx*10+x%10;
        x/=10;
    }
    return fx;
}

int main()
{
    int n,x,k,mini=1000000000,ans;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        k=abs(x-f(x));
        if(k<mini){
            ans=x;
            mini=k;
        }
        else if(k==mini && x<ans)
            ans=x;
    }
    cout << ans;
    return 0;
}
