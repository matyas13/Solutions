#include <iostream>
#include <vector>

using namespace std;

void solve(){
	int n;
	cin >> n;
	vector <int> a(n), b(n);
	for(int &it : a){
		cin >> it;
	}
	for(int &it : b){
		cin >> it;
	}	

	if((a[0]!=b[0]) || (a[n-1]!=b[n-1])){
		cout << "NO\n";
		return;
	}

	bool hasone=false;
	for(int i=0; i<n; i++){
		if(a[i]==1){
			hasone=true;
		}
	}

	for(int i=1; i<n-1; i++){
		if(a[i]==0 && b[i]==1 && !hasone){
			cout << "NO\n";
			return;
		}
		if(a[i]==1 && b[i]==0){
			cout << "NO\n";
			return;
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