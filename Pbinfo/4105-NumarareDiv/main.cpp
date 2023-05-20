#include <iostream>

using namespace std;

int nrdiv(int x){
	int cnt=0;
	for(int i=1; i*i<=x; i++){
		if(x%i==0){
			if(i*i==x) cnt++;
			else cnt+=2;
		}
	}
	return cnt;
}

int main(){
  	int n, a[1000], x;
  	cin >> n;
  	for(int i=0; i<n; i++){
  		cin >> x;
  		a[i]=nrdiv(x);
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