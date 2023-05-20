#include <iostream>

using namespace std;

int spar, spozpar, div10, div3;

void sol(int i, int n){
	int x;
	cin >> x;
	if(i<n){
		sol(i+1, n);
	}
	cout << x << ' ';
	if(x%2==0) spar+=x;
	if(i%2==0) spozpar+=x;
	if(x%10==0) div10++;
	if(i%2==1 && x%3==0) div3+=x;
}

int main(){
 	int n;
 	cin >> n;
 	sol(1, n); 
 	cout << '\n' << spar << '\n' << spozpar << '\n' << div10 << '\n' << div3;
  return 0;
}