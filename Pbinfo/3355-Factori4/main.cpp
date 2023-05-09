#include <iostream>

using namespace std;

#define MAXN 1000000000

bool nrdiv(int x){
   int cnt=0, d=2;
   while(x!=1){
      if(x%d==0){
         cnt++;
         while(x%d==0){
            x/=d;
         }
      }
      d++;
      if(d*d>x){
         d=x;
      }
   }
   return cnt==1;
}

int main(){
   int n, mini=MAXN, x;
   cin >> n;
   for(int i=0; i<n; i++){
      cin >> x;
      if(nrdiv(x) && x<mini){
         mini=x;
      }
   }
   if(mini==MAXN){
      cout << "NU EXISTA";
   }
   else{
      cout << mini;
   }
   return 0;
}
