#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("mcub.in");
ofstream fout("mcub.out");

int main(){
	long long ans=0;
	int n, x, y;
	fin >> n >> x;
	ans+=x;
	for(int i=1; i<n; i++){
		fin >> y;
		if(y>=x){
			ans=ans+(y-x);
		}
		x=y;
	}
	fout << ans;
  	fin.close();
  	fout.close();
   return 0;
}