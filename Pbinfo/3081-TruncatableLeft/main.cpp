#include <iostream>

using namespace std;

bool prime(int n){
   if(n<=1) return false;
   if(n%2==0) return n==2;
   for(int i=3; i*i<=n; i+=2){
      if(n%i==0) return false;
   }
   return true;
}

int main(){
   int n, p=1;
   cin >> n;
   while(p<=n) p*=10;
   p/=10;
   while(p>1){
      int k=n%p;
      if(!prime(k)){
         cout << "NU";
         return 0;
      }
      p/=10;
   }
   cout << "DA";
   return 0;
}
