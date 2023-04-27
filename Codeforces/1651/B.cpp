#include <iostream>

using namespace std;

const unsigned long long maxn=1000000000;

int main(){
   int tt;
   cin >> tt;
   while(tt--){
      int n;
      cin >> n;
      unsigned long long k=1;
      int m=n;
      while(m>1 && k*3<maxn){
         m--;
         k*=3;
      }
      if(m==1 && k<=maxn){
         cout << "YES\n";
         for(int i=0; i<n; i++){
            cout << k << ' ';
            k/=3;
         }
         cout << "\n";
      }
      else cout << "NO\n";
   }
   return 0;
}
