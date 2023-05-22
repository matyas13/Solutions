#include <iostream>

using namespace std;

int main(){
 	int n, a[1000];
 	cin >> n;
 	for(int i=0; i<n; i++) cin >> a[i];

 	for(int i=0; i<n; i++){
 		bool ok=false;
 		for(int j=i+1; j<n; j++){
 			if(a[i]<a[j]){
 				cout << a[j] << ' ';
 				ok=true;
 				break; 
 			}
 		}
 		if(!ok){
 			cout << -1 << ' ';
 		}
 	}
 	return 0;
}