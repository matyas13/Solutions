#include <iostream>

using namespace std;

const int maxn=4000000;

int main(){
 	int f1=1, f2=2, s=0;
 	while(f2<maxn){
 		if(f2%2==0){
 			s+=f2;
 		}
 		f2=f1+f2;
 		f1=f2-f1;
 	}
 	cout << s;
   return 0;
}