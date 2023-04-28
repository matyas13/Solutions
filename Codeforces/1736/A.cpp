#include <iostream>
#include <vector>

using namespace std;

int main(){
   int tt;
   cin >> tt;
   while(tt--){
      int n, x, suma=0, sumb=0, cnt=0;
      cin >> n;
      vector <int> a(n);
      vector <int> b(n);
      for(int i=0; i<n; i++){
         cin >> a[i];
         suma+=a[i];
      }
      for(int i=0; i<n; i++){
         cin >> b[i];
         sumb+=b[i];
      }
      for(int i=0; i<n; i++){
         if(a[i]!=b[i]){
            cnt++;
         }
      }
      cout << min(cnt, abs(suma-sumb)+1) << '\n';
   }
   return 0;
}
