#include <iostream>

using namespace std;

bool prim(int n){
   if(n<=1) return false;
   if(n%2==0) return n==2;
   for(int i=3; i*i<=n; i+=2){
      if(n%i==0) return false;
   }
   return true;
}

int main(){
   int n, m, x, cnt=0;
   cin >> n >> m;
   for(int i=1; i<=n; i++){
      if(i%2==0){
         for(int j=1; j<=m; j++){
            cin >> x;
            if(prim(x)) cnt++;
         }
      }
      else for(int j=1; j<=m; j++) cin >> x;
   }
   cout << cnt;
   return 0;
}
