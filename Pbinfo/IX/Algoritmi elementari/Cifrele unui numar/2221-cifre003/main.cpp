#include <iostream>

using namespace std;

int main()
{
    int n,ans=0,k;
    long long p=1;
    cin >> n;
    while(p<n){
        k=n/p/10*p+n%p;
        if(k%3==0)
            ans++;
        p*=10;
    }
    cout << ans;
    return 0;
}
