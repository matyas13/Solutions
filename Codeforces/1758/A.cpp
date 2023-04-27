#include <iostream>
#include <deque>

using namespace std;

int main(){
   int tt;
   cin >> tt;
   while(tt--){
      string s;
      deque <char> dq;
      cin >> s;
      for(int i=0; i<s.size(); i++){
         dq.push_back(s[i]);
         dq.push_front(s[i]);
      }
      for(auto it : dq) cout << it;
      cout << '\n';
   }
   return 0;
}
