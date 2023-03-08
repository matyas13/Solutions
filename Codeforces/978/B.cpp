#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char s[101];
	int n;
	cin >> n;
	cin.get();
	cin.getline(s,101);
	char *p=strstr(s,"xxx");
	int ans=0;
	while(p!=NULL){
		strcpy(p,p+1);
		ans++;
		p=strstr(s,"xxx");
	}	
	cout << ans << '\n';	
	return 0;
}