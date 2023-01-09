#include <iostream>

using namespace std;

int main()
{
    int n,x,ans1=0,ans2=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        do
        {
            (x%2==0) ? ans1++ : ans2++;
            x/=10;
        }while(x!=0);
    }
    cout << ans1 << ' ' << ans2;
    return 0;
}
