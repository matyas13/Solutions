#include <iostream>

using namespace std;

void solve(){
	int n;
	string s;
	cin >> n >> s;
	for(int i=0; i<n; i++){
		cout << (s[i]=='U' ? 'D' : (s[i]=='D' ? 'U' : s[i]));
	}	
	cout << "\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}