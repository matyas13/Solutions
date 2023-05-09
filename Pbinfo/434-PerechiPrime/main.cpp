#include <iostream>

using namespace std;

bool prime(int n){
   for(int i=3; i*i<=n; i+=2){
      if(n%i==0) return false;
   }
   return true;
}

int main(){
   int n;
   cin >> n;
   int d=3;
   while(n>0){
      if(prime(d) && prime(d+2)){
         cout << d << ' ' << d+2 << '\n';
         n--;
      }
      d+=2;
   }
   return 0;
}
