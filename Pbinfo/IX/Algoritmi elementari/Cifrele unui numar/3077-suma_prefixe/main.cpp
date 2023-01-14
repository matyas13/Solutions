#include <iostream>

using namespace std;

int main()
{
    long long n,ans=0;
    cin >> n;
    while(n>0){
        ans+=n;
        n/=10;
    }
    cout << ans;
    return 0;
}
