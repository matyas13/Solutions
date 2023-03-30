#include <iostream>

using namespace std;

void solve(){
	int a, b, c;
	cin >> a >> b >> c;
	int first=a-1, second=abs(b-c)+c-1;
	if(first==second){
		cout << "3\n";
	}	
	else if(first<second){
		cout << "1\n";
	}
	else{
		cout << "2\n";
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