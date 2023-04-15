/*
ID: krizbai1
LANG: C++14
TASK: ride
*/
#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("ride.in");
ofstream fout("ride.out");

int main(){
	string s;
	fin >> s;
	int Mod_first=s[0]-'A'+1, a, b;
	for(int i=1; i<s.size(); i++){
		Mod_first = ((Mod_first%47) * ((s[i]-'A'+1)%47)) % 47;
	}

	fin >> s;
	int Mod_second=s[0]-'A'+1;;
	for(int i=1; i<s.size(); i++){
		Mod_second = (Mod_second%47 * ((s[i]-'A'+1)%47)) % 47;
	}

	fout << (Mod_first==Mod_second ? "GO\n" : "STAY\n");

	fin.close();
	fout.close();
	return 0;
}