#include <iostream>

using namespace std;

void solve(){
	int n;
	string s;
	cin >> n >> s;
	char x='a';
	for(int i=0; i<n; i++){
		if(s[i]>x){
			x=s[i];
		}
	}
	cout << x-'a'+1 << '\n';
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
