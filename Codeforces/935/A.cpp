#include <iostream>

using namespace std;

int main()
{
    int n, ans=0;
    cin >> n;
    for(int i=n/2; i>0; i--){
        if((n-i)%i==0)
            ans++;
    }
    cout << ans;
    return 0;
}
