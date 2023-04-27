#include <iostream>

using namespace std;

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int tt;
   cin >> tt;
   while(tt--){
      int n, x, i=1, cnt=0;
      cin >> n;
      while(i<=n){
         cin >> x;
         int j=i;
         while(j<x){
            n++;
            cnt++;
            j++;
            i++;
         }
         i++;
      }
      cout << cnt << '\n';
   }
   return 0;
}
