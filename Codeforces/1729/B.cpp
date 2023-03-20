#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void solve(){
	int n;
	string s, ans;
	cin >> n >> s;
	for(int i=n-1; i>=0; i--){
		if(s[i]=='0'){
			ans.push_back(char('a'+(stoi(s.substr(i-2,2))-1)));
			i-=2;
		}
		else{
			ans.push_back(char('a'+(s[i]-'0')-1));
		}
	}
	reverse(ans.begin(), ans.end());
	cout << ans << '\n';
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}