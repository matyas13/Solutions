#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("suma.in");
ofstream fout("suma.out");

int main(){
 	unsigned long long n, p;
 	fin >> n >> p;
 	fout << (n%p)*((n+1)%p)*((n-1)%p)/3%p;
   return 0;
}