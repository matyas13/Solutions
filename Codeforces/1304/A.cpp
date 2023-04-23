#include <iostream>

using namespace std;

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int tt;
   cin >> tt;
   while(tt--){
      int x, y, a, b;
      cin >> x >> y >> a >> b;
      cout << ((y-x)%(a+b)==0 ? (y-x)/(a+b) : -1) << '\n';
   }
   return 0;
}
