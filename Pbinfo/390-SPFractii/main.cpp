#include <iostream>

using namespace std;

int gcd(int a, int b){
   return (b ? gcd(b, a%b) : a);
}

int lcm(int a, int b){
   return a*b/gcd(a,b);
}

void sum(int a, int b, int c, int d){
   int lkkt=lcm(b, d);
   a=a*(lkkt/b)+c*(lkkt/d);
   b=lkkt;
   int lnko=gcd(a, b);
   cout << a/lnko << ' ' << b/lnko << '\n';
}

void prod(int a, int b, int c, int d){
   a=a*c;
   b=b*d;
   int lnko=gcd(a, b);
   cout << a/lnko << ' ' << b/lnko;
}

int main(){
   int a, b, c, d;
   cin >> a >> b >> c >> d;
   sum(a, b, c, d);
   prod(a, b, c, d);
   return 0;
}
