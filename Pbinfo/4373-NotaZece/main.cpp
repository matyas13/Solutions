#include <iostream>

using namespace std;

#define ll long long

ll gcd(ll a, ll b){
	return (b ? gcd(b, a%b) : a);
}

ll lcm(ll a, ll b){
	return a*b/gcd(a, b);
}

int main(){
    ll a, b;
    cin >> a >> b;
    ll x=lcm(a, b);
    cout << x/a+x/b-2;
    return 0;
}