#include <iostream>

using namespace std;

int main(){
 	long long n=600851475143, d=3;
 	while(n>1){
 		while(n%d==0)
 			n/=d;
 		d+=2;
 	} 	
 	cout << d-2;
   return 0;
}