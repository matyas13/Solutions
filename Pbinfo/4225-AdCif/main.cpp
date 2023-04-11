#include <iostream>

using namespace std;

int main()
{
    int n,maxi=-1,k,ans=0;
    cin >> n;
    while(n>0){
        k=n%10;
        if(k>maxi){
            ans+=k;
            maxi=k;
        }
        n/=10;
    }
    cout << ans;
    return 0;
}
