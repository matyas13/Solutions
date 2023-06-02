#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

ifstream fin("elempp.in");
ofstream fout("elempp.out");

bool megfelel(int x){
	while(x>99)
		x/=10;
	return sqrt(x)==int(sqrt(x));
}

int main(){
  	int n, x;
  	fin >> n;
  	for(int i=0; i<n; i++){
  		fin >> x;
  		if(megfelel(x))
  			fout << x << ' ';
  	}
   return 0;
}