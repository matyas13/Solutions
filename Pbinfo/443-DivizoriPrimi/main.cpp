#include <iostream>

using namespace std;

int main(){
   int n, x;
   long long s=0;
   cin >> n;
   for(int i=0; i<n; i++){
      cin >> x;
      int m=x;
      for(int d=2; d*d<=x; d++){
         if(x%d==0){
            m=min(m, d);
            m=min(m, x/d);
         }
      }
      s+=m;
   }
   cout << s;
   return 0;
}
