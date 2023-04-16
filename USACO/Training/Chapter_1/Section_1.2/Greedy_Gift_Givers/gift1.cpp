/*
ID: krizbai1
LANG: C++14
TASK: gift1
*/
#include <iostream>
#include <fstream>

using namespace std;

#define MAXP 10

ifstream fin("gift1.in");
ofstream fout("gift1.out");

int n, money[MAXP];
string names[MAXP];

int search(string name){
	for(int i=0; i<n; i++){
		if(names[i]==name){
			return i;
		}
	}
	return n-1;
}

int main(){
	fin >> n;
	int from, to;
	for(int i=0; i<n; i++){
		fin >> names[i];
	}
	for(int i=0; i<n; i++){
		int amount, dist;
		string name;
		fin >> name >> amount >> dist;
		from=search(name);
		for(int j=0; j<dist; j++){
			fin >> name;
			to=search(name);
			money[from]-=amount/dist;
			money[to]+=amount/dist;
		}
	}
	for(int i=0; i<n; i++){
		fout << names[i] << ' ' << money[i] << '\n';
	}
	fin.close();
	fout.close();
	return 0;
}