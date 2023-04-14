#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("word.in");
ofstream fout("word.out");

int main(){
	int n, k, len=0;
	fin >> n >> k;
	string s;
	for(int i=0; i<n; i++){
		fin >> s;
		if(len+s.size()>k){
			fout << '\n' << s;
			len=s.size();
		}
		else{
			if(len!=0){
				fout << ' ';
			}
			fout << s;
			len+=s.size();
		}
	}

	fin.close();
	fout.close();
	return 0;
}