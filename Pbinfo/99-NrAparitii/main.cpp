#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("nraparitii.in");
ofstream fout("nraparitii.out");

int main(){
  	int n, a[100];
  	fin >> n;
 	for(int i=0; i<n; i++)
 		fin >> a[i];

 	int cnt=0, x=a[n-1];
 	for(int i=n-1; i>=0; i--){
 		if(a[i]==x) cnt++;
 	}
 	fout << cnt;
   return 0;
}