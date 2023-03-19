#include <iostream>
#include <vector>

using namespace std;

void solve(){
	int n;
	string s;
	cin >> n >> s;
	vector <int> v(26);
	v[s[0]-'a']=1;
	for(int i=1; i<n; i++){
		if(v[s[i]-'a']==0){
			if(v[s[i-1]-'a']==1){
				v[s[i]-'a']=2;
			}
			else{
				v[s[i]-'a']=1;
			}
		}
	}
	for(int i=1; i<n; i++){
		if(v[s[i-1]-'a']==v[s[i]-'a']){
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