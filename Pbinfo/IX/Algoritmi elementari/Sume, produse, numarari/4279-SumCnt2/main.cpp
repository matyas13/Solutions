#include <iostream>

using namespace std;

int main()
{
    int n,x,k,sum=0,cnt=0;
    cin >> n>> k;
    for(int i=0;i<n;i++){
        cin >> x;
        if(x%2==1)
            sum+=x;
        if(x%k==0)
            cnt++;
    }
    cout << sum << ' ' << cnt;
    return 0;
}
