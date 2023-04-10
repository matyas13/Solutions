#include <iostream>

using namespace std;

void solve(){
	int x, y;
	cin >> x >> y;
	if(x==1){
		cout << (y==1 ? "YES" : "NO");
	}	
	else if(x<=3){
		cout << (y<4 ? "YES" : "NO");
	}
	else{
		cout << "YES";
	}
	cout << '\n';
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}