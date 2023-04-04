#include <iostream>
#include <string>

using namespace std;

void solve(){
	int n, ans;
	char d;
	string s;
	cin >> n >> d >> s;
	ans=s.size();
	for(int i=ans; i>=0; i--){
		if(s[i]<d){
			ans=i;
		}
	}
	s.insert(s.begin()+ans, d);
	cout << s << '\n';
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}