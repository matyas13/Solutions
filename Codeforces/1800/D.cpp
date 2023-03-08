#include <iostream>
#include <map>

using namespace std;

void solve(){
	int n;
	string s;
	cin >> n >> s;
	int ans=n-1;
	for(int i=0; i<n-2; i++){
		if(s[i]==s[i+2]){
			ans--;
		}
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