#include <iostream>

using namespace std;

int main(){
   int tt;
   cin >> tt;
   while(tt--){
      long long x1, p1, x2, p2;
      cin >> x1 >> p1 >> x2 >> p2;
      int k=min(p1, p2);
      p1-=k;
      p2-=k;
      if(p1>=7) cout << ">\n";
      else if(p2>=7) cout << "<\n";
      else{
         for(int i=0; i<p1; i++) x1*=10;
         for(int i=0; i<p2; i++) x2*=10;
         cout << (x1>x2 ? ">\n" : (x1==x2 ? "=\n" : "<\n"));
      }
   }
   return 0;
}
