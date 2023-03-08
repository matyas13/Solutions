#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector < int > v(n);
    for(int &it : v){
        cin >> it;
    }

    sort(v.begin(), v.end());

    int mini=1001;
    for(int i=1; i<n; i++){
        mini=min(mini,v[i]-v[i-1]);
    }

    cout << mini << '\n';
    return;
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
