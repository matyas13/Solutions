#include <iostream>

using namespace std;

int sumcif(int x){
	int s=0;
	while(x>0){
		s+=x%10;
		x/=10;
	}
	return s;
}

int main(){
 	int n, x;
 	cin >> n;
 	for(int i=0; i<n; i++){
 		cin >> x;
 		cout << x%sumcif(x) << ' ';
 	} 
   return 0;
}