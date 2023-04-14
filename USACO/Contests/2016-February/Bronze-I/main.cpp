#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("pails.in");
ofstream fout("pails.out");

int main(){
	int x, y, m, ans=0;
	fin >> x >> y >> m;
	for(int i=0; i*x<=m; i++){
		for(int j=0; j*y+i*x<=m; j++){
			if(j*y+i*x>ans){
				ans=j*y+i*x;
			}
		}
	}
	fout << ans;
	fin.close();
	fout.close();
	return 0;
}