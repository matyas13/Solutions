#include <iostream>

using namespace std;

int gcd(int a, int b){
   return (b ? gcd(b, a%b) : a);
}

int lcm(int a, int b){
   return a*b/gcd(a, b);
}

string create(string s, int k){
   string s2="";
   for(int i=0; i<k; i++) s2+=s;
   return s2;
}

int main(){
   int tt;
   cin >> tt;
   while(tt--){
      string s, t;
      cin >> s >> t;
      int ns=s.size(), nt=t.size();
      int x=lcm(ns, nt);
      if(create(s, x/ns) == create(t, x/nt)){
         cout << create (s, x/ns) << '\n';
      }
      else cout << "-1\n";
   }
   return 0;
}
