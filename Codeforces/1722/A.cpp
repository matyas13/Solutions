#include <iostream>
#include <algorithm>

using namespace std;

void solve(){
	int n;
	string s;
	cin >> n >> s;
	sort(s.begin(), s.end());
	if(s=="Timru"){
		cout << "YES\n";
	}	
	else{
		cout << "NO\n";
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}