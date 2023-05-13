#include <iostream>

using namespace std;

bool prime(int x){
    if(x<=1) return false;
    if(x%2==0) return x==2;
    for(int d=3; d*d<=x; d+=2){
        if(x%d==0) return false;
    }
    return true;
}

int main(){
    int n, x, cnt=0;
    double sum=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        if(prime(x)){
            sum+=x;
            cnt++;
        }
    }
    int ans=sum*100/cnt;
    cout << ans/100 << '.' << ans/10%10 << ans%10;;
    return 0;
}
