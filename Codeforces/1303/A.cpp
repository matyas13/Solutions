#include <bits/stdc++.h>

using namespace std;

void solve(){
	string s;
	cin >> s;
	int b=s.size()-1;
	while(b>0 && s[b]=='0'){
		b--;
	}
	int a=0, ans=0;
	while(a<b && s[a]=='0'){
		a++;
	}
	while(a<b){
		if(s[a]=='0'){
			ans++;
		}
		a++;
	}
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