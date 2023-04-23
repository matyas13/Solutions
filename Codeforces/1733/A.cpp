#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k, x, a[101]{};
        cin >> n >> k;
        for(int i=1; i<=n; i++){
            cin >> x;
            a[i%k] = max(a[i%k], x);
        }
        long long ans=0;
        for(int i=0; i<=k; i++) ans+=a[i];
        cout << ans << '\n';
    }

    return 0;
}
