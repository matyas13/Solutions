#include <iostream>
#include <vector>

using namespace std;

int main(){
   int tt;
   cin >> tt;
   while(tt--){
      int n;
      string s;
      cin >> n >> s;
      vector <int> pos;
      for(int i=0; i<n/2; i++){
         if(s[i]!=s[n-i-1]) pos.push_back(i);
      }
      bool ok=true;
      for(int i=1; i<pos.size(); i++){
         if(pos[i]-pos[i-1]>1) ok=false;
      }
      cout << (ok ? "YES\n" : "NO\n");
   }
   return 0;
}
