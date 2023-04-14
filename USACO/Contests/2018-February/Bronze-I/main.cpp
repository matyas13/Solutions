#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("teleport.in");
ofstream fout("teleport.out");

int main(){
	int a, b, x, y;
	fin >> a >> b >> x >> y;
	if(a>b){
		swap(a,b);
	}
	if(x>y){
		swap(x,y);
	}
	fout << min(abs(a-x)+abs(b-y), b-a);
	fin.close();
	fout.close();
	return 0;
}