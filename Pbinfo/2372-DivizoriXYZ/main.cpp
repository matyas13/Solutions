#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
   int n;
   cin >> n;
   vector <int> div;
   for(int i=2; i*i<=n; i++){
      if(n%i==0){
         if(i*i==n){
            div.push_back(i);
         }
         else{
            div.push_back(i);
            div.push_back(n/i);
         }
      }
   }
   sort(div.begin(), div.end());
   bool felt=false;
   for(int i=0; i<div.size(); i++){
      for(int j=i+1; j<div.size(); j++){
         for(int k=j+1; k<div.size(); k++){
            if(div[i]+div[j]+div[k]==n){
               cout << div[i] << ' ' << div[j] << ' ' << div[k] << '\n';
               felt=true;
            }
         }
      }
   }
   if(!felt){
      cout << "nu exista";
   }
   return 0;
}
