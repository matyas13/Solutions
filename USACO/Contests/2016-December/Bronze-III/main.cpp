#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("cowsignal.in");
ofstream fout("cowsignal.out");

int main(){
	int m, n, k;
	fin >> m >> n >> k;
	for(int i=0; i<m; i++){
		string s;
		fin >> s;
		for(int q=0; q<k; q++){
			for(int j=0; j<n; j++){
				for(int p=0; p<k; p++){
					fout << s[j];
				}
			}
			fout << '\n';
		}
		
	}
	fin.close();
	fout.close();
	return 0;
}