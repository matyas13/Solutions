#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("paint.in");
ofstream fout("paint.out");

int main(){
	int a, b, x, y;
	fin >> a >> b >> x >> y;
	if(b<x || a>y){
		fout << b-a + y-x;
	}	
	else{
		fout << abs(min(a, x) - max(b, y));
	}
	fin.close();
	fout.close();
	return 0;
}