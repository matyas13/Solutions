#include <iostream>

using namespace std;

int main()
{
    int n,x,ans=0,maxi;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        maxi=-1;
        while(x>0){
            if(x%10>maxi)
                maxi=x%10;
            x/=10;
        }
        if(maxi%2==1)
            ans++;
    }
    cout << ans;
    return 0;
}
