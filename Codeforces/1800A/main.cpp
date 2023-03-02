#include <iostream>

using namespace std;

void solve(){
	int n;
	char x, y;
	string ans="";
	cin >> n >> x;
	x=tolower(x);
	ans.push_back(x);
	for(int i=1; i<n; i++){
		cin >> y;
		y=tolower(y);
		if(x!=y){
			ans.push_back(y);
		}
		x=y;
	}
	cout << (ans=="meow" ? "YES\n" : "NO\n");
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}