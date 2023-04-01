#include <iostream>

using namespace std;

int main(){
	int n;
	string s;
	cin >> n >> s;
	for(int i=n-1; i>0; i--){
		if(s[i]==s[i-1]){
			cout << "No\n";
			return 0;
		}
	}
	cout << "Yes\n";
	return 0;
}