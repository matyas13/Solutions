#include <iostream>

using namespace std;

int main(){
   int n, m, cnt=0;
   cin >> n >> m;
   for(int i=1; i<=n; i++){
      int x=i;
      while(x%m==0){
         cnt++;
         x/=m;
      }
   }
   cout << cnt;
   return 0;
}
