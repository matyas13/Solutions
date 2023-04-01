#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

ifstream fin("level3_5.in");
ofstream fout("level3_5.out");

int two_left=-2, two_right=2, up=-1, down=1, one_left=-1, one_right=1;

bool can_escape(char a[][300], int i, int j, int len, int n){
	//right
	int x=i, y=j+two_right;
	while(y<len && a[x][y]=='O'){
		y+=two_right;
	}
	if(y>=len){
		return true;
	}
	//left
	x=i, y=j+two_left;
	while(y>=0 && a[x][y]=='O'){
		y+=two_left;
	}
	if(y<0){
		return true;
	}
	//right up
	x=i+up;
	y=j+one_right;
	while(x>=0 && y<len && a[x][y]=='O'){
		x+=up;
		y+=one_right;
	}
	if(x<0 || y>=len){
		return true;
	}
	//right_down
	x=i+down;
	y=j+one_right;
	while(x<n && y<len && a[x][y]=='O'){
		x+=down;
		y+=one_right;
	}
	if(x>=n || y>=len){
		return true;
	}
	//left_up
	x=i+up;
	y=j+one_left;
	while(x>=0 && y>=0 && a[x][y]=='O'){
		x+=up;
		y+=one_left;
	}
	if(x<0 || y<0){
		return true;
	}
	//left_down
	x=i+down;
	y=j+one_left;
	while(x<n && y>=0 && a[x][y]=='O'){
		x+=down;
		y+=one_left;
	}
	if(x>=n || y<0){
		return true;
	}
	return false;
}

void solve(){
	char a[300][300];
	int n=0;
	fin.getline(a[n],300);
	while(strlen(a[n])!=0){
		n++;
		fin.getline(a[n],300);
	}
	
	int len=strlen(a[0]);
	
	for(int i=1; i<n; i++){
		for(int j=1; j<len; j++){
			if(a[i][j]=='W'){
				if(can_escape(a,i,j,len,n)){
					fout << "FREE\n";
				}
				else{
					fout << "TRAPPED\n";
				}
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