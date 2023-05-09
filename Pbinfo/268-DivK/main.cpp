#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("divk.in");
ofstream fout("divk.out");

int main(){
   int n, k;
   fin >> n >> k;
   for(int i=0; i<n; i++){
      int x;
      fin >> x;
      int cnt=0;
      for(int d=1; d*d<=x; d++){
         if(x%d==0){
            if(d*d==x){
               cnt++;
            }
            else{
               cnt+=2;
            }
         }
      }
      if(cnt>=k){
         fout << x << ' ';
      }
   }
   return 0;
}
