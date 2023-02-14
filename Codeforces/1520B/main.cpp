#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, ans=0;
        cin >> n;
        for(long long p=1; p<=n; p=p*10+1){
            for(long long d=1; d<=9; d++){
                if(p*d<=n)
                    ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
