#include <iostream>

using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
      int x, y;
      cin >> x >> y;
      cout << 2 << '\n' << x-1 << ' ' << 1 << '\n' << x << ' ' << y << '\n';
   }
   return 0;
}
