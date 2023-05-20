#include <iostream>

using namespace std;

int main(){
 	int a[1000], n, poz1=-1;
 	cin >> n;
 	for(int i=0; i<n; i++){
 		cin >> a[i];
 		if(a[i]%2==0 && poz1==-1) poz1=i;
 	} 

 	if(poz1==-1) cout << "NU EXISTA";
 	else{
 		int poz2=n-1;
 		while(poz2>poz1 && a[poz2]%2!=0){
 			poz2--;
 		}
 		int s=0;
 		for(int i=poz1; i<=poz2; i++){
 			s+=a[i];
 		}
 		cout << s;
 	}
  return 0;
}