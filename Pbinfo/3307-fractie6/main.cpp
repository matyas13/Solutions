#include <iostream>

using namespace std;

int gcd(int a, int b){
   return (b ? gcd(b, a%b) : a);
}

int main(){
   int tt;
   cin >> tt;
   while(tt--){
      int a, b;
      cin >> a >> b;
      int lnko=gcd(a, b);
      b/=lnko;
      int ket=0, ot=0;
      while(b%2==0){
         ket++;
         b/=2;
      }
      while(b%5==0){
         ot++;
         b/=5;
      }
      if(b==1) cout << "fractie finita";
      else if(ket || ot) cout << "fractie periodica mixta";
      else cout << "fractie periodica simpla";
      cout << '\n';
   }
   return 0;
}
