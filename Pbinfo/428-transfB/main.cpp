#include <iostream>

using namespace std;

int main(){
 	int b, n;
 	cin >> b >> n;
 	int p=1;
 	for(int i=1; i<n; i++){
 		p*=b;
 	}	
 	int s=0;
 	for(int i=0; i<n; i++){
 		int x;
 		cin >> x;
 		s+=x*p;
 		p/=b;
 	}
 	cout << s;
   return 0;
}