#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("fmi_orase1.in");
ofstream fout("fmi_orase1.out");

int main(){
	int n, a[100];
	fin >> n;
	for(int i=0; i<n; i++){
		fin >> a[i];
	}
	int maxvol=-1;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			maxvol=max(maxvol, min(a[i], a[j])*(j-i));
		}
	}
	fout << maxvol;
  	fin.close();
  	fout.close();
   return 0;
}