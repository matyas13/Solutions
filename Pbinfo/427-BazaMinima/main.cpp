#include <iostream>

using namespace std;

int main(){
 	int n, nr=2, x;
 	cin >> n;
 	for(int i=0; i<n; i++){
 		cin >> x;
 		do{
 			nr=max(nr, x%10+1);
 			x/=10;
 		}while(x>0);
 	} 	
 	cout << nr;
   return 0;
}