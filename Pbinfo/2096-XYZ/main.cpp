#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("xyz.in");
ofstream fout("xyz.out");

int main(){
  	int x, y, z;
  	fin >> x >> y >> z;
  	fout << y;
  	while(x>1){
  		fout << z;
  		x--;
  	}
   return 0;
}