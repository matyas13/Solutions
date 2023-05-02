#include <iostream>

using namespace std;

int main(){
   int tt;
   cin >> tt;
   while(tt--){
      int b, p, f, h, c;
      cin >> b >> p >> f >> h >> c;
      b/=2;
      if(b<p && b<f){
         cout << b*max(h, c) << '\n';
         continue;
      }
      int s=0;
      if(h>c){
         int least=min(b, p);
         s+=h*least;
         b-=least;
         s+=c*min(b, f);
      }
      else{
         int least=min(b, f);
         s+=c*least;
         b-=least;
         s+=h*min(b, p);
      }
      cout << s << '\n';
   }
   return 0;
}
