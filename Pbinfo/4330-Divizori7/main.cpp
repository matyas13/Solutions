#include <iostream>

using namespace std;

int main(){
	int n, d1=-1, d2=-1;
	cin >> n;
	for(int i=2; i<n; i++){
		if(n%i==0){
			if(d1==-1){
				d1=i;
			}
			else{
				cout << d1+i;
				return 0;
			}
		}
	}	
	return 0;
}