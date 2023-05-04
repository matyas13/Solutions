#include <iostream>

using namespace std;

int main(){
   int n, x;
   cin >> n;
   for(int i=0; i<n; i++){
      cin >> x;
      int d=2, cnt=1;
      while(x>1){
         int p=0;
         while(x%d==0){
            p++;
            x/=d;
         }
         cnt=cnt*(2*p+1);
         d++;
         if(x>1 && d*d>x){
            d=x;
         }
      }
      cout << cnt << ' ';
   }
   return 0;
}
