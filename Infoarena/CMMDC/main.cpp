#include <iostream>
#include <fstream>

using namespace std;

int gcd(int a, int b){
   return (b ? gcd(b, a%b) : a);
}

ifstream fin("cmmdc.in");
ofstream fout("cmmdc.out");

int main(){
   int a, b;
   fin >> a >> b;
   int lnko=gcd(a, b);
   fout << (lnko==1 ? 0 : lnko);
   fin.close();
   fout.close();
   return 0;
}
