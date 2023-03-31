#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

ifstream fin("level2_5.in");
ofstream fout("level2_5.out");

int count(char a[][300], int i, int j){
	int cnt=0;
	if(a[i-1][j-1]=='O'){
		cnt++;
	}
	if(a[i-1][j+1]=='O'){
		cnt++;
	}

	if(a[i+1][j-1]=='O'){
		cnt++;
	}
	if(a[i+1][j+1]=='O'){
		cnt++;
	}

	if(a[i][j-2]=='O'){
		cnt++;
	}
	if(a[i][j+2]=='O'){
		cnt++;
	}
	return cnt;
}

void solve(){
	char a[300][300];
	int n=0;
	fin.getline(a[n],300);
	while(strlen(a[n])!=0){
		n++;
		fin.getline(a[n],300);
	}
	/*
	
	for(int i=0; i<n; i++){
		for(int j=0; j<len; j++){
			cout << a[i][j];
		}
		cout << '\n';
	}*/
	int len=strlen(a[0]);
	for(int i=1; i<n; i++){
		for(int j=1; j<len; j++){
			if(a[i][j]=='W'){
				fout << count(a,i,j) << '\n';
			}
		}
	}
}

int main(){
	int t;
	fin >> t;
	fin.get();
	fin.get();
	while(t--){
		solve();
	}
	return 0;
}