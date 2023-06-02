#include <iostream>

using namespace std;

void adunare(int k){
	for(int i=0; i<k; i++){
		for(int j=0; j<k; j++)
			cout << (i+j)%k << ' ';
		cout << '\n';
	}
}

void inmultire(int k){
	for(int i=0; i<k; i++){
		for(int j=0; j<k; j++)
			cout << (i*j)%k << ' ';
		cout << '\n';
	}
}

int main(){
 	int n, x;
 	cin >> n;
 	for(int i=1; i<=n; i++){
 		cin >> x;
 		if(i%2==0)
 			inmultire(x);
 		else
 			adunare(x);
 	} 	
   return 0;
}