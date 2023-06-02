#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("nrapprime.in");
ofstream fout("nrapprime.out");

bool prime(int x){
	if(x<=1) return false;
	if(x%2==0) return x==2;
	for(int i=3; i*i<=x; i+=2){
		if(x%i==0) return false;
	}
	return true;
}

int main(){
 	int n, x, cnt=0;
 	fin >> n;
 	for(int i=0; i<n; i++){
 		fin >> x;
 		if(prime(x))
 			cnt++;
 	}
 	fout << cnt;
   return 0;
}