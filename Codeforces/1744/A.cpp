#include <iostream>
#include <vector>

using namespace std;

void solve(){
	int n;
	cin >> n;
	vector <int> v(n), f(n);
	string s;
	for(int i=0; i<n; i++){
		cin >> v[i];
	}	
	cin >> s;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(v[i]==v[j] && s[i]!=s[j]){
				cout << "NO\n";
				return;
			}
		}
	}
	cout << "YES\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}