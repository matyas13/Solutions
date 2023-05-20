#include <iostream>

using namespace std;

int main(){
 	int a[200], n, s=0;
 	cin >> n;
 	for(int i=0; i<n; i++){
 		cin >> a[i];
 		s+=a[i];
 	} 	
 	for(int i=0; i<n; i++){
 		cout << s-a[i] << ' ';
 	}
   return 0;
}