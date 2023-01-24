#include <iostream>

using namespace std;

int main()
{
    int tt,x,cnt,ans=0;
    cin >> tt;
    while(tt--){
        cnt=0;
        cin >> x;
        cnt+=x;
        cin >> x;
        cnt+=x;
        cin >> x;
        cnt+=x;
        if(cnt>1)
            ans++;
    }
    cout << ans;
    return 0;
}
