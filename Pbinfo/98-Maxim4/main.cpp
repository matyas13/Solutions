#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("maxim4.in");
ofstream fout("maxim4.out");

int main(){
  	int maxi, n, x, cnt=1;
  	fin >> n >> maxi;
  	for(int i=1; i<n; i++){
  		fin >> x;
  		if(x>maxi){
  			maxi=x;
  			cnt=1;
  		}
  		else if(x==maxi){
  			cnt++;
  		}
  	}
  	fout << maxi << ' ' << cnt;
   return 0;
}