#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("blackfriday.in");
ofstream fout("blackfriday.out");

int main(){
  	int x[10], y[10], n;
  	fin >> n;
  	for(int i=0; i<n; i++) fin >> x[i];
  	for(int i=0; i<n; i++) fin >> y[i];
 	int poz=1;
 	double maxval=100.0*x[0]/y[0];
  	for(int i=1; i<n; i++){
  		double val=100.0*x[i]/y[i];
  		if(val>maxval){
  			maxval=val;
  			poz=i+1;
  		}
  	}
  	fout << poz;
   return 0;
}