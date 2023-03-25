#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve(){
	int n;
	cin >> n;
	vector <int> v(2*n);
	for(int i=0; i<n*2; i++){
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	for(int i=0; i<n; i++){
		cout << v[i] << ' ' << v[i+n] << ' ';
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