#include <iostream>

using namespace std;

void solve(){
	string s;
	cin >> s;
	if(s.size()==1 && s[0]=='^'){
		cout << 1 << '\n';
		return;
	}
	int cnt=0;
	if(s.front()!='^'){
		s="^"+s;
		cnt++;
	}
	if(s.back()!='^'){
		s+="^";
		cnt++;
	}
	for(int i=1; i<s.size()-1; i++){
		if(s[i]=='_'){
			if(s[i+1]=='_'){
				s.insert(i+1, 1, '^');
				i++;
				cnt++;
			}
		}
	}
	cout << cnt << "\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}