#include <iostream>

using namespace std;

int main(){
   int tt;
   cin >> tt;
   while(tt--){
      int n, k;
      cin >> n >> k;
      while(n!=0){
         int x=min(n, k);
         n-=x;
         for(int i=0; i<x; i++){
            cout << char('a'+i);
         }
      }
      cout << '\n';
   }
   return 0;
}
