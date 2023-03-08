#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    if(n%3==1){
        cout << n/3+1 << ' ' << n/3 << '\n';
    }
    else if(n%3==2){
        cout << n/3 << ' ' << n/3+1 << '\n';
    }
    else{
        cout << n/3 << ' ' << n/3 << '\n';
    }
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
