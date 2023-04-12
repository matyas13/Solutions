#include <iostream>

using namespace std;

int ogl(int x){
	int fx=0;
	while(x>0){
		fx=fx*10+x%10;
		x/=10;
	}
	return fx;
}

long long divcnt(int a){
	long long s=0;
	int i;
	for(i=1; i*i<a; i++){
		if(a%i==0){
			s=s+i+a/i;
		}
	}
	if(i*i==a){
		s+=i;
	}
	return s;
}

int main(){
	long long sum=0;
	int n, x;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> x;
		sum+=divcnt(ogl(x));
	}
	cout << sum;
	return 0;
}