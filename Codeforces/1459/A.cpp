#include <iostream>
#include <vector>

using namespace std;

int main(){
   int tt;
   cin >> tt;
   while(tt--){
      int n;
      cin >> n;
      vector <char> a(n);
      for(int i=0; i<n; i++) cin >> a[i];
      vector <char> b(n);
      for(int i=0; i<n; i++) cin >> b[i];
      int red=0, blue=0;
      for(int i=0; i<n; i++){
         if(a[i]>b[i]) red++;
         else if(a[i]<b[i]) blue++;
      }
      if(red==blue) cout << "EQUAL\n";
      else if(red>blue) cout << "RED\n";
      else cout << "BLUE\n";
   }
   return 0;
}
