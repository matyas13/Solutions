/*
ID: krizbai1
LANG: C++14
TASK: friday
*/
#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("friday.in");
ofstream fout("friday.out");

int month[12]{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(){
	int days[7]{};
	int cnt=0, n;
	fin >> n;
	for(int i=1900; i<1900+n; i++){
		for(int m=0; m<12; m++){
			days[cnt]++;
			int leap = m==1 && i%4==0 && (i%100!=0 || i%400==0);
			cnt = (cnt+month[m]+leap)%7;
		}
	}
	for(int i=0; i<6; i++){
		fout << days[i] << ' ';
	}
	fout << days[6] << '\n';
	fin.close();
	fout.close();
	return 0;
}