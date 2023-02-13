#include <iostream>

using namespace std;

void solve() {
    int n, cnt1=0, cnt2=0, x;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        if(x==1)
            cnt1++;
        else
            cnt2++;
    }


    if((cnt1+2*cnt2)%2!=0){
        cout << "NO\n";
        return;
    }

    int s=(cnt1+2*cnt2)/2;
    if(s%2==0 || (s%2==1 && cnt1!=0))
        cout << "YES\n";
    else
        cout << "NO\n";
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
