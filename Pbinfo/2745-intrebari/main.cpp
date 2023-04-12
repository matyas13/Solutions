#include <iostream>

using namespace std;

int divcnt(int a){
	int i, cnt=0;
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
	long long sum=0;
	int a[20], n, t, p;
	cin >> n >> t >> p;
	for(int i=0; i<n; i++){
		cin >> a[i];
		sum+=a[i];
	}
	if(t==1){
		int mini=a[0];
		for(int i=1; i<p; i++){
			if(a[i]<mini){
				mini=a[i];
			}
		}
		int s=0;
		while(mini>0){
			s+=mini%10;
			mini/=10;
		}
		cout << s << '\n';
	}
	else{
		int maxi=a[0];
		for(int i=1; i<p; i++){
			if(a[i]>maxi){
				maxi=a[i];
			}
		}
		cout << divcnt(maxi) << '\n';
	}
	cout << sum;
	return 0;
}