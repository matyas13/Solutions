#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve(){
	int n;
	cin >> n;
	vector <int> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	sort(v.begin(), v.end());

	int cnt=1;
	for(int i=1; i<n; i++){
		if(v[i]!=v[i-1]){
			cnt++;
		}
	}
	cout << cnt << '\n';
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}	
	return 0;
}