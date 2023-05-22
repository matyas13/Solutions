#include <iostream>

using namespace std;

int main(){
 	int n, a[100];
 	cin >> n;
 	for(int i=0; i<n; i++) cin >> a[i];
 	int cnt=0;
 	for(int i=0; i<n; i++){
 		for(int j=i+1; j<n; j++){
 			for(int k=j+1; k<n; k++){
 				if(a[i]+a[j]>a[k] && a[i]+a[k]>a[j] && a[j]+a[k]>a[i]) cnt++;
 			}
 		}
 	} 	
 	cout << cnt;
   return 0;
}