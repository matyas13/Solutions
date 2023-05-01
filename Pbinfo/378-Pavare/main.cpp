#include <iostream>

using namespace std;

using ll=long long;

ll gcd(ll a, ll b){
   return (b ? gcd(b, a%b) : a);
}

int main(){
   ll a, b;
   cin >> a >> b;
   ll lnko=gcd(a, b);
   cout << a*b/(lnko*lnko) << ' ' << lnko;
   return 0;
}
