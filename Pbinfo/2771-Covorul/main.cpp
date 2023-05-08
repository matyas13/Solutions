#include <iostream>

using namespace std;

int main(){
   int n, m;
   cin >> n >> m;
   cout << min(n, m) << ' ';
   int ans=0;
   while(n && m){
      if(n>m){
         ans+=n/m;
         n-=m*(n/m);
      }
      else{
         ans+=m/n;
         m-=n*(m/n);
      }
   }
   cout << ans;
   return 0;
}
