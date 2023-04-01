#include <iostream>

using namespace std;

int main(){
	char x;
	for(int i=0; i<8; i++){
		for(int j=0; j<8; j++){
			cin >> x;
			if(x=='*'){
				cout << (char)('a'+j) << 8-i;
				return 0;
			}
		}
	}	
	return 0;
}