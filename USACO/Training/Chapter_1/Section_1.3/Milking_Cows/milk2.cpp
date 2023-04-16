/*
ID: krizbai1
LANG: C++14
TASK: milk2
*/
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

ifstream fin("milk2.in");
ofstream fout("milk2.out");

struct milktime{
	int start, stop;
};

bool cmp(milktime a, milktime b){
	return a.start < b.start;
}

int main(){
	int n;
	fin >> n;
	milktime a[5000];
	for(int i=0; i<n; i++){
		fin >> a[i].start >> a[i].stop;
	}	
	fin.close();

	sort(a, a+n, cmp);

	int maxmilk=0, maxidle=0, act=0;
	for(int i=1; i<n; i++){
		if(a[i].start > a[act].stop){
			maxidle = max(maxidle, a[i].start - a[act].stop);
			maxmilk = max(maxmilk, a[act].stop - a[act].start);
			act = i;
		}
		else{
			a[act].stop = max(a[act].stop, a[i].stop);
		}
	}
	maxmilk = max(maxmilk, a[act].stop - a[act].start);

	fout << maxmilk << ' ' << maxidle << '\n';
	fout.close();
	return 0;
}