#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int x, y;
		cin >> x >> y;
		if(100-(100*x/100)==200-(200*y/100))
			cout << "BOTH\n";
		else if(100-(100*x/100)<200-(200*y/100))
			cout << "FIRST\n";
		else
			cout << "SECOND\n";
	}	
	return 0;
}