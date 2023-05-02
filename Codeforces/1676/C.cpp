#include <iostream>
#include <vector>

using namespace std;

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int tt;
   cin >> tt;
   while(tt--){
      int n, m;
      cin >> n >> m;
      vector <string> v(n);
      for(int i=0; i<n; i++){
         cin >> v[i];
      }
      int mini=10e9;
      for(int i=0; i<n; i++){
         for(int j=0; j<n; j++){
            if(i!=j){
               int s=0;
               for(int k=0; k<m; k++){
                  s+=abs(v[i][k]-v[j][k]);
               }
               mini=min(mini, s);
            }
         }
      }
      cout << mini << '\n';
   }
   return 0;
}
