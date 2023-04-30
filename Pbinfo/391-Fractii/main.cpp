#include <iostream>

using namespace std;

int gcd(int a, int b){
   return (b ? gcd(b, a%b) : a);
}

int lcm(int a, int b){
   return a*b/gcd(a, b);
}

int main(){
   int n, sz1, n1, sz2, n2;
   cin >> n >> sz1 >> n1;
   for(int i=1; i<n; i++){
      cin >> sz2 >> n2;
      int lkkt=lcm(n1, n2);
      sz1=sz1*(lkkt/n1)+sz2*(lkkt/n2);
      n1=lkkt;
      int lnko=gcd(sz1, n1);
      sz1/=lnko;
      n1/=lnko;
   }
   cout << sz1 << ' ' << n1;
   return 0;
}
