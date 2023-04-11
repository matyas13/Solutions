#include <iostream>

using namespace std;

int main()
{
    int n,x,ans=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        while(x>9)
            x/=10;
        ans+=x;
    }
    cout << ans;
    return 0;
}
