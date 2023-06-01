#include <iostream>

using namespace std;

int f(int x){
	int fx=0;
	while(x>0){
		fx=fx*10+x%10;
		x/=10;
	}
	return fx;
}

bool pal(int x){
	return x==f(x);
}

int main(){
	int maxpal=-1;
 	for(int i=999; i>=100; i--){
 		for(int j=999; j>=100; j--){
 			if(pal(i*j)){
 				maxpal=max(maxpal, i*j);
 			}
 		}
 	} 	
 	cout << maxpal;
   return 0;
}