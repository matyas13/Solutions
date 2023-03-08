#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    vector < int > even, odd;
    int n, x;
    bool ch=true;
    cin >> n;
    for(int i=0; i<n; ++i){
        cin >> x;
        if(x%2==0 && i%2==1)
            even.push_back(x);
        else if(x%2==1 && i%2==0)
            odd.push_back(x);
    }
    if(odd.size()!=even.size())
        cout << -1 << '\n';
    else
        cout << odd.size() << '\n';
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
