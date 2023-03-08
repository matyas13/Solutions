#include <iostream>
#include <math.h>

using namespace std;

void solve(){
    int a, b;
    cin >> a >> b;
    if(a>b)
        swap(a,b);
    cout << max(2*a,b)*max(2*a,b) << '\n';
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
