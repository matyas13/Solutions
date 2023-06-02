#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("minmax.in");
ofstream fout("minmax.out");

int main(){
 	int n, x, mini, maxi;
 	fin >> n >> x;
 	mini=maxi=x;
 	for(int i=1; i<n; i++){
 		fin >> x;
 		mini=min(mini, x);
 		maxi=max(maxi, x);
 	}
 	fout << mini << ' ' << maxi;
   return 0;
}