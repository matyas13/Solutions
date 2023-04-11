#include <iostream>

using namespace std;

int main()
{
    long long x,maxi,ans=0;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        maxi=-1;
        do
        {
            if(x%10>maxi)
                maxi=x%10;
            x/=10;
        }while(x>0);
        ans=ans*10+maxi;
    }
    cout << ans*ans;
    return 0;
}
