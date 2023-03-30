#include <iostream>

using namespace std;

int main(){
	string a, b;
	cin >> a;
	for(int i=0; i<5; i++){
		cin >> b;
		if(a[1]==b[1] || a[0]==b[0] || a[0]==b[1] || a[1]==b[0]){
			cout << "YES\n";
			return 0;
		}
	}	
	cout << "NO\n";	
	return 0;
}