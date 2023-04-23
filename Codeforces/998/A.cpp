#include <iostream>
#include <vector>

using namespace std;

int main(){
   int n, s=0;
   cin >> n;
   vector <int> G;
   vector <int> v(n);
   for(int i=0; i<n; i++){
      cin >> v[i];
      s+=v[i];
   }
   if(n==1) cout << -1;
   else if(n==2){
      if(v[0]!=v[1]) cout << 1 << '\n' << 1;
      else cout << -1;
   }
   else{
      if(v[0]==s-v[0]) cout << 1 << '\n' << 2;
      else cout << 1 << '\n' << 1;
   }
   return 0;
}
