#include <iostream>

using namespace std;

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int tt;
   cin >> tt;
   while(tt--){
      int n, x, y;
      cin >> n >> x;
      bool ok=true;
      for(int i=1; i<n; i++){
         cin >> y;
         if(y%x!=0){
            ok=false;
         }
      }
      cout << (ok ? "YES\n" : "NO\n");
   }
   return 0;
}
