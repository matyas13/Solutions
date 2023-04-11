#include <iostream>

using namespace std;

int gcd(int a, int b){
    return (b ? gcd(b, a%b) : a);
}

int f(int x){
    int fx=0;
    while(x>0){
        fx=fx*10+x%10;
        x/=10;
    }
    return fx;
}

int main(){
    long long s=0;
    int x, y;
    cin >> x >> y;
    while(x+y!=0){
        if(gcd(x, y)==1 && gcd(f(x), f(y))==1){
            s=s+x+y;
        }
        cin >> x >> y;
    }   
    cout << s;
    return 0;
}