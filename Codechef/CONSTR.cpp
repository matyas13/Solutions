#include <iostream>

using namespace std;

void solve(){
	string s;
	int n;
	cin >> n >> s;
	int i=0, j=1;
	if(s.size()==1){
		cout << s;
	}
	while(j<n){
		while(j<n && s[i]==s[j]){
			j++;
		}
		string m=s.substr(i,j-i);
		if(m.size()%2==0){
			cout << m[0] << m[0];
		}
		else{
			cout << m[0];
		}
		i=j;
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