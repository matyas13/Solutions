#include <iostream>

using namespace std;

int desc(int n){
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
   int a, b;
   cin >> a >> b;
   int da=desc(a), db=desc(b);
   cout << (da>db ? a : (da<db ? b : min(a, b)));
   return 0;
}
