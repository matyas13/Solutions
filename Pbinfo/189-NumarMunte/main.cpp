#include <iostream>

using namespace std;

int main(){
 	int n;
 	cin >> n;
 	for(int i=0; i<n; i++){
 		string s;
 		cin >> s;
 		int x=0;
 		bool asc=false, desc=false;
 		while(x<s.size()-1 && s[x]<s[x+1]){
 			x++;
 			asc=true;
 		}
 		int poz=x, y=s.size()-1;
 		while(y>x && s[y-1]>s[y]){
 			y--;
 			desc=true;
 		}
 		if(x==y && asc && desc) cout << 1 << '\n';
 		else cout << 0 << '\n';
 	}
   return 0;
}