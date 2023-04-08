#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
	int n, d, x;	
	cin >> n >> d;
	vector <int> v(n);
	for(int i=0; i<n; i++){
		cin >> x;
		v[i]=x;
	}
	sort(v.begin(), v.end());
	if(v.back()<=d || v[0]+v[1]<=d){
		cout << "Yes\n";
	}
	else{
		cout << "No\n";
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