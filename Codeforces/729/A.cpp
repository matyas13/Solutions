#include <iostream>

using namespace std;

int main(){
   string s, sn="";
   int n;
   cin >> n >> s;
   s+="----";
   int i=0, j=0;
   while(j<n){
      if(s[i]!='o'){
         sn.push_back(s[i]);
         j++;
      }
      else{
         j=i+1;
         while(s[j]=='g' && s[j+1]=='o'){
            j+=2;
         }
         if(j-i>1){
            sn+="***";
         }
         else{
            sn.push_back(s[i]);
         }
      }
      i=j;
   }
   cout << sn;
   return 0;
}
