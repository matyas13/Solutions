#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("nrdiv.in");
ofstream fout("nrdiv.out");

int main(){
   int n, cnt=0;
   fin >> n;
   for(int d=1; d*d<=n; d++){
      if(n%d==0){
         if(d*d==n) cnt++;
         else cnt+=2;
      }
   }
   fout << cnt;
   fin.close();
   fout.close();
   return 0;
}
