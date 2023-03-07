#include <bits/stdc++.h>

using namespace std;

void solve(){
	string s;
	cin >> s;
	int a=0, b=0, c=0;
	for(int i=s.size()-1; i>=0; i--){
		if(s[i]=='A'){
			a++;
		}
		else if(s[i]=='B'){
			b++;
		}
		else{
			c++;
		}
	}
	cout << (a+c==b ? "YES\n" : "NO\n");	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}