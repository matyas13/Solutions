#include <iostream>
#include <vector>

using namespace std;

void solve(){
	int n, x;
	cin >> n;
	vector <bool> used(n+1);
	for(int i=0; i<n*2; i++){
		cin >> x;
		if(!used[x]){
			cout << x << ' ';
			used[x]=true;
		}
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