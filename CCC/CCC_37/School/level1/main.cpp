#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("level1_5.in");
ofstream fout("level1_5.out");

void solve(){
	char x;
	int ans=0;
	while(fin>>x){
		if(x=='O'){
			ans++;
		}
	}
	fout << ans;
}

int main(){
	solve();
	return 0;
}