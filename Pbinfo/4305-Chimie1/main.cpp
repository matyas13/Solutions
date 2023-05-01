#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("chimie1.in");
ofstream fout("chimie1.out");

int main(){
   int n, d1, d2, x, maxi=0, cnt=0;
   fin >> n >> d1 >> d2;
   for(int i=0; i<n; i++){
      fin >> x;
      int k=x;
      if(k==0)
         continue;
      while(k%d1==0) k/=d1;
      while(k%d2==0) k/=d2;

      if(k==1){
         if(x>maxi){
            maxi=x;
            cnt=1;
         }
         else if(x==maxi)
            cnt++;
      }
   }
   if(maxi==0) fout << "NU EXISTA";
   else fout << maxi << ' ' << cnt;
   fin.close();
   fout.close();
   return 0;
}
