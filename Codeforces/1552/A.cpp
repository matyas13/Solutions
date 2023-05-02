#include <iostream>
#include <algorithm>

using namespace std;

int main(){
   int tt;
   cin >> tt;
   while(tt--){
      int n, cnt=0;
      string s, ord;
      cin >> n >> s;
      ord=s;
      sort(s.begin(), s.end());
      for(int i=0; i<n; i++){
         if(s[i]!=ord[i]) cnt++;
      }
      cout << cnt << '\n';
   }
   return 0;
}
