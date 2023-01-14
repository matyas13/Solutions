#include <iostream>

using namespace std;

int main()
{
    int ans=0,n;
    cin >> n;
    while(n>0){
        ans+=n%10;
        n/=10;
    }
    cout << ans;
    return 0;
}
