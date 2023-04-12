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

int divcnt(int a){
	int cnt=0, i;
	for(i=1; i*i<a; i++){
		if(a%i==0){
			cnt+=2;
		}
	}
	if(i*i==a){
		cnt++;
	}
	return cnt;
}

int main(){
	int n;
	cin >> n;
	cout << divcnt(ogl(n));	
	return 0;
}