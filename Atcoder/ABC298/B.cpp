#include <iostream>

using namespace std;

bool check(int a[][100], int b[][100], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(a[i][j]==1 && b[i][j]==0){
				return false;
			}
		}
	}
	return true;
}

int main(){
	int n, a[100][100], help[100][100], b[100][100];
	cin >> n;
	//read A
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> a[i][j];
		}
	}
	//read B
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> b[i][j];
		}
	}
	//rotate three times
	bool possible=false;
	for(int rot=0; !possible && rot<4; rot++){
		if(check(a, b, n)){
			possible=true;
		}
		int x, y=n-1;
		//rotate
		for(int i=0; i<n; i++){
			x=0;
			for(int j=0; j<n; j++){
				help[x][y]=a[i][j];
				x++;
			}
			y--;
		}
		//copy
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				a[i][j]=help[i][j];
			}
		}
	}
	if(!possible){
		cout << "No";
	}
	else{
		cout << "Yes";
	}
	return 0;
}