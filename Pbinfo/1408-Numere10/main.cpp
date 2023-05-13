#include <iostream>

using namespace std;

#define MAXN 10e9+1

bool prime(int x){
    if(x<=1) return false;
    if(x%2==0) return x==2;
    for(int d=3; d*d<=x; d+=2){
        if(x%d==0) return false;
    }
    return true;
}

int main(){
    int n, x, mini=MAXN, maxi=0, cnt=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        if(prime(x)){
            cnt++;
            mini=min(mini, x);
            maxi=max(maxi, x);
        }
    }
    cout << cnt << ' ' << mini << ' ' << maxi;
    return 0;
}
