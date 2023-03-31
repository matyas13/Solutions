#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

ifstream fin("level1_5.in");
ofstream fout("level1_5.out");

void solve(){
	string s;
	fin >> s;
	if(s[0]==s[1]){
		fout << s[0] << '\n';
		return;
	}
	sort(s.begin(), s.end());
	if(s[0]=='P' && s[1]=='R'){
		fout << 'P' << '\n';
	}
	else if(s[0]=='R' && s[1]=='S'){
		fout << 'R' << '\n';
	}
	else{
		fout << 'S' << '\n';
	}
}

int main(){
	int t;
	fin >> t;
	while(t--){
		solve();
	}
	return 0;
}