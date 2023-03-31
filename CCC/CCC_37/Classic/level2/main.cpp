#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

ifstream fin("level2_5.in");
ofstream fout("level2_5.out");

void quarter(string &s, int &n){
	for(int i=0; i<n; i++){
		if(s[i]==s[i+1]){
			s.erase(i,1);
		}
		else{
			sort(s.begin()+i, s.begin()+i+2);
			if(s[i]=='P' && s[i+1]=='R'){
				s.erase(i+1,1);
			}
			else if(s[i]=='R' && s[i+1]=='S'){
				s.erase(i+1,1);
			}
			else{
				s.erase(i,1);
			}
		}
		n--;
	}
}

void solve(int n){
	string s;
	fin >> s;
	for(int i=0; i<2; i++){
		quarter(s,n);
	}
	fout << s << '\n';
}

int main(){
	int t, n;
	fin >> t >> n;
	while(t--){
		solve(n);
	}
	return 0;
}