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
   cout << 2 << ' ';
   int x=3;
   while(n>1){
      if(prime(x)){
         cout << x << ' ';
         n--;
      }
      x+=2;
   }
   return 0;
}
