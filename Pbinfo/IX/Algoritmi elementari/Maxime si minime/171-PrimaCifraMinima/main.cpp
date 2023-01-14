#include <iostream>

using namespace std;

int first(int x)
{
    while(x>9)
        x/=10;
    return x;
}

int main()
{
    int n,x,ans,mini,k;
    cin >> n >> ans;
    mini=first(ans);
    for(int i=1;i<n;i++){
        cin >> x;
        k=first(x);
        if(k<mini){
            ans=x;
            mini=k;
        }
        else if(k==mini && x>ans)
            ans=x;
    }
    cout << ans;
    return 0;
}
