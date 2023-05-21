#include <iostream>

using namespace std;

int main(){
   int n, m, x[10000], y[10000];
  	cin >> n;
  	for(int i=0; i<n; i++) cin >> x[i];
  	cin >> m >> y[0];
  	int mini=y[0];
  	for(int i=1; i<m; i++){
  		cin >> y[i];
  		mini=min(mini, y[i]);
  	}
  	
  	bool ok=false;
  	for(int i=0; i<n; i++){
  		if(x[i]<mini){
  			cout << x[i] << ' ';
  			ok=true;
  		}
  	}
  	if(!ok) cout << "NU EXISTA";
   return 0;
}