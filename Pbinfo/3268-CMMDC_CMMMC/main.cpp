#include <iostream>

using namespace std;

using ll=long long;

ll gcd(ll a, ll b){
   return (b ? gcd(b, a%b) : a);
}

ll lcm(ll a, ll b){
   return a*b/gcd(a, b);
}

int main(){
   ll a, b;
   cin >> a >> b;
   cout << gcd(a, b) << ' ' << lcm(a, b);
   return 0;
}
