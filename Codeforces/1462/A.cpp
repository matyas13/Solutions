#include <iostream>
#include <deque>

using namespace std;

void solve(){
	int n;
	cin >> n;
	deque <int> dq(n);
	for(int i=0; i<n; i++){
		cin >> dq[i];
	}
	for(int i=n/2; i>0; i--){
		cout << dq.front() << ' ';
		dq.pop_front();
		cout << dq.back() << ' ';
		dq.pop_back();
	}	
	if(!dq.empty()){
		cout << dq.back();
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