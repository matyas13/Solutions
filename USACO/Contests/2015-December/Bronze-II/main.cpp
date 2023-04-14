#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("speeding.in");
ofstream fout("speeding.out");

int main(){
	int n, m, a, b, road[100], bessie[100], curr=0;
	fin >> n >> m;
	for(int i=0; i<n; i++){
		fin >> a >> b;
		for(int j=curr; j<a+curr; j++){
			road[j]=b;
		}
		curr+=a;
	}
	curr=0;
	for(int i=0; i<m; i++){
		fin >> a >> b;
		for(int j=curr; j<a+curr; j++){
			bessie[j]=b;
		}
		curr+=a;
	}
	int maxi=0;
	for(int i=0; i<100; i++){
		maxi=max(maxi, bessie[i]-road[i]);
	}
	fout << maxi;
	fin.close();
	fout.close();
	return 0;
}