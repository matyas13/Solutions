#include <iostream>

using namespace std;

void solve(){
	string s;
	cin >> s;
	if(s.back()=='A'){
		cout << "NO\n";
		return;
	}

	int cnt=0;
	for(auto it : s){
		if(it=='A'){
			cnt++;
		}
		else{
			cnt--;
		}
		if(cnt<0){
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}