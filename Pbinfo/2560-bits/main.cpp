#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bits.in");
ofstream fout("bits.out");

int main(){
 	long long n, q, k;
 	fin >> n >> q;
 	for(int i=0; i<q; i++){
 		fin >> k;
 		fout << ((n>>k)&1);
 	}
   return 0;
}