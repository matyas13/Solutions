#include <iostream>

using namespace std;

void solve(){
	string a, b;
	cin >> a >> b;
	char la=a.back(), lb=b.back();
	if(la==lb){
		if(a.size()==b.size()){
			cout << "=\n";
		}
		else if(la=='S'){
			if(a.size()<b.size()){
				cout << ">\n";
			}
			else{
				cout << "<\n";
			}
		}
		else{
			if(a.size()<b.size()){
				cout << "<\n";
			}
			else{
				cout << ">\n";
			}
		}
	}
	else{
		if(la<lb){
			cout << ">\n";
		}
		else{
			cout << "<\n";
		}
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