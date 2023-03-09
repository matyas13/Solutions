#include <iostream>
#include <vector>

using namespace std;

void solve(){
	int n;
	cin >> n;
	vector <int> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}	
	int x;
	string s;
	for(int i=0; i<n; i++){
		cin >> x >> s;
		int k=v[i];
		for(int j=0; j<x; j++){
			if(s[j]=='D'){
				(k==9 ? k=0 : k++);
			}
			else{
				(k==0 ? k=9 : k--);	
			}
		}
		cout << k << ' ';
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