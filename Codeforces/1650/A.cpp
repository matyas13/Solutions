#include <iostream>

using namespace std;
	
void solve(){
	string s;
	char x;
	cin >> s >> x;
	for(int i=0; i<s.size(); i+=2){
		if(s[i]==x){
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}