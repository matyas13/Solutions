#include <iostream>

using namespace std;

int f(int x){
   int fx=0;
   while(x>0){
      fx=fx*10+x%10;
      x/=10;
   }
   return fx;
}

bool prime(int n){
   if(n<=1) return false;
   if(n%2==0) return n==2;
   for(int i=3; i*i<=n; i+=2){
      if(n%i==0) return false;
   }
   return true;
}

int main(){
   int n, x, cnt=0;
   cin >> n;
   for(int i=0; i<n; i++){
      cin >> x;
      if(x==f(x) && prime(x) && x%2==1){
         cnt++;
      }
   }
   cout << cnt;
   return 0;
}
