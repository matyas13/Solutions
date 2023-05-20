#include <iostream>

using namespace std;

int sumcif(int x){
	int s=0;
	while(x>0){
		s+=x%10;
		x/=10;
	}
	return s;
}

int main(){
 	int a[200], n, x;
 	cin >> n;
 	for(int i=0; i<n; i++){
 		cin >> x;
 		a[i]=sumcif(x);
 	} 

 	int cnt=0;
 	for(int i=0; i<n; i++){
 		for(int j=i+1; j<n; j++){
 			if(a[i]==a[j]) cnt++;
 		}
 	}
 	cout << cnt;
   return 0;
}