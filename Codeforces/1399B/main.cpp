#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector < long long > va(n), vb(n);

    int mina=1000000001, minb=1000000001;
    for(int i=0; i<n; i++){
        cin >> va[i];
        if(va[i]<mina)
            mina=va[i];
    }
    for(int i=0; i<n; i++){
        cin >> vb[i];
        if(vb[i]<minb)
            minb=vb[i];
    }

    long long ans=0;
    for(int i=0; i<n; i++){
        ans+=max(va[i]-mina, vb[i]-minb);
    }
    cout << ans << '\n';
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
