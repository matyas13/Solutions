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
    int a, b;
    cin >> a >> b;
    int cnt=0;
    if(a>b) swap(a,b);
    for(int i=a; i<=b; i++){
        if(prime(i))
            cnt++;
    }
    cout << cnt;
    return 0;
}
