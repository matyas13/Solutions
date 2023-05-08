#include <iostream>

using namespace std;

using ll=long long;

ll gcd(ll a, ll b){
   return (b ? gcd(b, a%b) : a);
}

int main(){
   ll n, m, k, p;
   cin >> n >> m >> k >> p;
   ll VII=n*m;
   ll VIII=k*p;
   ll lnko=gcd(VII, VIII);
   cout << VII/lnko+VIII/lnko << ' ' << VII/lnko << ' ' << VIII/lnko << ' ' << lnko;
   return 0;
}
