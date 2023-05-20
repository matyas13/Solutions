#include <iostream>

using namespace std;

int main(){
  int a[1000], n, mini, maxi, minpoz=0, maxpoz=0;
  cin >> n >> a[0];
  mini=maxi=a[0];
  for(int i=1; i<n; i++){
  	cin >> a[i];
  	if(a[i]>maxi){
  		maxi=a[i];
  		maxpoz=i;
  	}
  	if(a[i]<mini){
  		mini=a[i];
  		minpoz=i;
  	}
  }
  for(int i=min(minpoz, maxpoz); i<=max(minpoz, maxpoz); i++){
  	cout << a[i] << ' ';
  }
  return 0;
}