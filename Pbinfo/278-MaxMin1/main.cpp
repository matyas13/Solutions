#include <iostream>

using namespace std;

int main(){
 	int n, m, a[100], x, maxi=-1;
 	cin >> n;
 	for(int i=0; i<n; i++){
 		cin >> a[i];
 	} 
 	cin >> m;
 	for(int i=0; i<m; i++){
 		cin >> x;
 		maxi=max(maxi, x);
 	}	

 	int cnt=0;
 	for(int i=0; i<n; i++){
 		if(a[i]>maxi){
 			cnt++;
 		}
 	}
 	cout << cnt;
   return 0;
}