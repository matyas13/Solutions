#include <iostream>

using namespace std;

int main(){
   int tt;
   cin >> tt;
   while(tt--){
      int n, x, y, sum;
      bool mm=false, mp=false;
      cin >> n >> x;
      sum=x;
      for(int i=1; i<n; i++){
         cin >> y;
         sum+=y;
         if(x+y==0) mp=true;
         else if(x+y==-2) mm=true;
         x=y;
      }
      if(mm) cout << sum+4 << '\n';
      else if(mp) cout << sum << '\n';
      else cout << sum-4 << '\n';
   }
   return 0;
}
