#include <iostream>

using namespace std;

int dig(int x) {
    int s=0, k=1;
    while(x>0){
        s+=k;
        k++;
        x/=10;
    }
    return s;
}

void solve() {
    int n;
    cin >> n;
    cout << 10*(n%10-1)+dig(n) << '\n';
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
