#include <iostream>
#include <fstream>

using namespace std;

using ll=long long;

ll gcd(ll a, ll b){
   return (b ? gcd(b, a%b) : a);
}

ll lcm(ll a, ll b){
   return a*b/gcd(a, b);
}

int main(){
   ifstream fin("aoc2020.in");
   ofstream fout("aoc2020.out");
   ll n, x, y;
   fin >> n >> x;
   for(int i=1; i<n; i++){
      fin >> y;
      x=lcm(x, y);
   }
   fout << x;
   fin.close();
   fout.close();
   return 0;
}
