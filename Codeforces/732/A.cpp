#include <iostream>

using namespace std;

int main()
{
    int ans=1, m, n, k;
    cin >> n >> k;
    m=n;
    while(m%10!=0 && (m-k)%10!=0){
        m+=n;
        ans++;
    }
    cout << ans;
    return 0;
}
