#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
 	int n;
 	cin >> n;
 	vector <int> v(n);
 	for(int i=0; i<n; i++) cin >> v[i];

 	sort(v.begin(), v.end());
 	int maxn=-1, akt=1, val;
 	for(int i=1; i<n; i++){
 		if(v[i]==v[i-1]){
 			akt++;
 		}
 		else{
 			if(akt>maxn){
 				maxn=akt;
 				val=v[i-1];
 			}
 			akt=1;
 		}
 	}
 	if(n!=1 && akt>maxn){
 		maxn=akt;
 		val=v[n-2];
 	}
 	if(maxn>n/2){
 		cout << "DA" << ' ' << val;
 	}
 	else{
 		cout << "NU";
 	}
   return 0;
}