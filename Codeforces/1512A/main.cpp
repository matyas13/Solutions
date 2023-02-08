#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n, x;
    cin >> n;
    vector < int > v(n+1);
    for(int i=1; i<=n; i++){
        cin >> v[i];
    }

    if(v[1]!=v[2] && v[2]==v[3]){
        cout << 1 << '\n';
        return;
    }
    else if(v[2]!=v[1] && v[1]==v[3]){
        cout << 2 << '\n';
        return;
    }

    for(int i=2; i<n; i++){
        if(v[i]!=v[i+1]){
            cout << i+1 << '\n';
            return;
        }
    }
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
