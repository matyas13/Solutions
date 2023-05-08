#include <iostream>
#include <map>

using namespace std;

int main(){
   map <int, int> mp;
   int n;
   cin >> n;
   for(int i=0; i<n; i++){
      int x;
      cin >> x;
      int d=2;
      while(x!=1){
         while(x%d==0){
            mp[d]++;
            x/=d;
         }
         d++;
         if(d*d>x)
            d=x;
      }
   }
   auto it=mp.end();
   it--;
   cout << it->first << ' ' << it->second;
   return 0;
}
