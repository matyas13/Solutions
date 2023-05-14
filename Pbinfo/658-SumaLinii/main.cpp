#include <iostream>

using namespace std;

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n, m, x, s;
   cin >> n >> m;
   for(int i=0; i<n; i++){
      s=0;
      for(int j=0; j<m; j++){
         cin >> x;
         s+=x;
      }
      cout << s << ' ';
   }
   return 0;
}
