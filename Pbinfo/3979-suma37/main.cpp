#include <iostream>

using namespace std;

int main()
{
    int n,ans=0;
    cin >> n;
    while(n>0){
        if(n%10>2 && n%10<8)
            ans+=n%10;
        n/=10;
    }
    cout << ans;
    return 0;
}
