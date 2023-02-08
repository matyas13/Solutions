#include <iostream>

using namespace std;

int main()
{
    int n, maxi, mini, x, ans=0;
    cin >> n >> x;
    maxi=mini=x;
    for(int i=1; i<n; ++i){
        cin >> x;
        if(x<mini){
            mini=x;
            ans++;
        }
        if(x>maxi){
            maxi=x;
            ans++;
        }
    }
    cout << ans;
    return 0;
}
