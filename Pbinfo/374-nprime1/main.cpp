#include <iostream>

using namespace std;

bool prime(int x){
    for(int d=3; d*d<=x; d+=2){
        if(x%d==0) return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    if(n>2){
        cout << 2 << ' ';
    }
    int x=3;
    while(x<=n){
        if(prime(x)){
            cout << x << ' ';
        }
        x+=2;
    }
    return 0;
}
