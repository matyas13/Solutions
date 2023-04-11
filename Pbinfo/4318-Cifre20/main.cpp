#include <iostream>

using namespace std;

int main()
{
    int n,x,ans=0,cnt;
    cin >> n;
    for(int i=0;i<n;i++){
            cnt=0;
        cin >> x;
        do
        {
            cnt++;
            x/=10;
        }while(x>0);
        if(cnt%2==1)
            ans++;
    }
    cout << ans;
    return 0;
}
