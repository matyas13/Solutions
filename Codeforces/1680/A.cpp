#include <iostream>

using namespace std;

int main(){
   int tt;
   cin >> tt;
   while(tt--){
      int n;
      cin >> n;
      for(int i=1; i<=n; i++) cout << i+1 << ' ';
      cout << '\n';
   }
   return 0;
}
