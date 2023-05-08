#include <iostream>
#include <string>

using namespace std;

int main(){
   int tt;
   cin >> tt;
   while(tt--){
      string pal;
      cin >> pal;
      string s1=pal.substr(1, pal.size()-1), s2=pal.substr(0, pal.size()-1);
      if(s1==s2){
         cout << -1 << '\n';
      }
      else{
         cout << s1.size() << '\n';
      }
   }
   return 0;
}
