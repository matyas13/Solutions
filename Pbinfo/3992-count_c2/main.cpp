#include <iostream>

using namespace std;

int main()
{
    int n,x,ans=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        if(x%100>=10 && x/100==0)
            ans++;
    }
    cout << ans;
    return 0;
}
