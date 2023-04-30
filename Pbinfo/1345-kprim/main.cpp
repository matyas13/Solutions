#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("kprim.in");
ofstream fout("kprim.out");

bool prime(long long n){
   if(n<=1) return false;
   if(n%2==0) return n==2;
   for(long long i=3; i*i<=n; i+=2){
      if(n%i==0) return false;
   }
   return true;
}

int main(){
   long long n, k=0;
   fin >> n;
   while(n>=0){
      k++;
      if(prime(k)) n--;
   }
   fout << k*k;
   return 0;
}
