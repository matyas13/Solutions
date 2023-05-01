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
   int n;
   cin >> n;
   n++;
   while(!prime(n)) n++;
   cout << n;
   return 0;
}
