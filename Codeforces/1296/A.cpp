#include <iostream>

using namespace std;

void solve(){
	int n, odd=0, even=0, sum=0, x;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> x;
		(x%2==0 ? even++ : odd++);
		sum+=x;
	}
	if(sum%2==1){
		cout << "YES\n";
		return;
	}
	cout << (even*odd==0 ? "NO\n" : "YES\n");
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}