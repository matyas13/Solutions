#include <iostream>

using namespace std;

int main()
{
	int n,ans;
	cin >> n;
	ans=n/10*3;
	n=n%10;
	for(int i=1;i<=n;i++){
		if(i==1 || i==3 || i==9 || i==7)
			ans+=1;
		else if(i==2 || i==4 || i==6 || i==8)
			ans+=6;
		else if(i==5)
			ans+=5;
	}
	cout << ans%10;
	return 0;
}

