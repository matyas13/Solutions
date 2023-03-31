#include <iostream>
#include <fstream>
#include <deque>

using namespace std;

ifstream fin("level3_5.in");
ofstream fout("level3_5.out");

void solve(int n){
	char nouse;
	int R, P, S;
	fin >> R >> nouse >> P >> nouse >> S >> nouse;
	string a("");
	while(R>=3){
		fout << "RRRP";
		R-=3;
		P--;
	}
	if(R==2){
		if(P>=2){
			fout << "RPRP";
			P-=2;
		}
		else{
			fout << "RSRP";
			S--;
			P--;
		}
	}
	else if(R==1){
		fout << "RP";
		P--;
	}
	while(P--){
		fout << "P";
	}
	while(S--){
		fout << "S";
	}

	fout << "\n";
}

int main(){
	int t, n;
	fin >> t >> n;
	while(t--){
		solve(n);
	}
	return 0;
}