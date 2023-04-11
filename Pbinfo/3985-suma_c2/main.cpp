#include <iostream>

using namespace std;

int main()
{
    long long ans=0;
    int n,x;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        if(x%100>=10 && x/100==0)
            ans+=x;
    }
    cout << ans;
    return 0;
}
