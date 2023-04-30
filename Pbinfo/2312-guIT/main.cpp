#include <iostream>

using namespace std;

int desc(long long n){
   int s=0;
   for(int i=2; i*i<=n; i++){
      if(n%i==0){
         s+=i;
         while(n%i==0) n/=i;
      }
   }
   if(n!=1) s+=n;
   return s;
}

int main(){
   long long a;
   cin >> a;
   cout << desc(a);
   return 0;
}
