#include <iostream>

using namespace std;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(c<a){
        swap(c,a);
        swap(b,d);
    }
    if(b<c){
        cout << b-a+1+d-c+1 << '\n';
    }
    else{
        d=max(b,d);
        cout << d-a+1 << '\n';
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    while(n--){
        solve();
    }
    return 0;
}
