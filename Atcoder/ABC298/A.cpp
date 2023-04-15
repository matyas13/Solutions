#include <iostream>

using namespace std;

int main(){
	int n;
	string s;
	cin >> n >> s;
	bool good=false;
	for(int i=0; i<n; i++){
		if(s[i]=='x'){
			cout << "No";
			return 0;
		}
		else if(s[i]=='o'){
			good=true;
		}
	}
	if(!good){
		cout << "No";
	}
	else{
		cout << "Yes";
	}
	return 0;
}