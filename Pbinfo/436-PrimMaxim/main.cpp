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
    int n, x, maxi=0, cnt;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        if(prime(x)){
            if(x>maxi){
                maxi=x;
                cnt=1;
            }
            else if(x==maxi){
                cnt++;
            }
        }
    }
    cout << maxi << ' ' << cnt;
    return 0;
}
