#include <iostream>

using namespace std;

void solve(){
	string s;
	cin >> s;
	if(s.size()==1){
		cout << s.back() << '\n';
		return;
	}

	cout << ((s[s.size()-2]-'0')*10 + (s.back()-'0'))%20 << '\n';
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}