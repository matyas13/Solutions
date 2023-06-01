#include <iostream>

using namespace std;

int main(){
 	int n, egy=0, nulla=0;
 	cin >> n;
 	while(n!=0){
 		if(n&1){
 			egy++;
 		}
 		else{
 			nulla++;
 		}
 		n>>=1;
 	}
 	cout << nulla << ' ' << egy;
   return 0;
}