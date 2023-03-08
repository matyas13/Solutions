#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector < int > a(n), b(n);
    for(auto &it: a){
        cin >> it;
    }
    for(auto &it: b){
        cin >> it;
    }

    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());

    int i=0, ans=0;
    while(i<n && k){
        ans+=max(a[i],b[i]);
        i++;
        k--;
    }
    while(i<n){
        ans+=a[i++];
    }
    cout << ans << '\n';
}

int main()
{
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }
    return 0;
}
