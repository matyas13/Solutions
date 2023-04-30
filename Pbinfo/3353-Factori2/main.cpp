#include <iostream>

using namespace std;

long long desc(int n){
   long long p=1;
   for(int i=2; i*i<=n; i++){
      if(n%i==0){
         p*=i;
         while(n%i==0) n/=i;
      }
   }
   if(n!=1) p*=n;
   return p;
}

int main(){
   int a, b;
   cin >> a >> b;
   long long da=desc(a), db=desc(b);
   cout << (da>db ? a : (da<db ? b : min(a, b)));
   return 0;
}
