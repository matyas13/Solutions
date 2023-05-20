#include <iostream>

using namespace std;

int main(){
 	int n;
 	float a[200];
 	cin >> n;
 	for(int i=0; i<n; i++){
 		cin >> a[i];
 	}
 	float p=a[0], u=a[n-1];
 	int cnt=0;
 	if(p>u) swap(p, u);
 	for(int i=1; i<n; i++){
 		if(a[i]<p || a[i]>u) cnt++;
 	}
 	cout << cnt;
  return 0;
}