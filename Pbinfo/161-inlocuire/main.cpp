#include <iostream>

using namespace std;

int main(){
 	int n, s=0, cnt=0;
 	int a[200];
 	cin >> n;
 	for(int i=0; i<n; i++){
 		cin >> a[i];
 		if(a[i]!=0){
 			cnt++;
 			s+=a[i];
 		}
 	} 	
 	int med=s/cnt;
 	for(int i=0; i<n ;i++){
 		if(a[i]==0)
 			cout << a[i]+med << ' ';
 		else
 			cout << a[i] << ' ';
 	}

   return 0;
}