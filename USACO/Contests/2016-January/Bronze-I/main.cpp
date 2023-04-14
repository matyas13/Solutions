#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("promote.in");
ofstream fout("promote.out");

int main(){
	int Bb, Ba, Sb, Sa, Gb, Ga, Pb, Pa;
	fin >> Bb >> Ba >> Sb >> Sa >> Gb >> Ga >> Pb >> Pa;

	fout << Sa+Ga+Pa-Sb-Gb-Pb << '\n';

	fout << Ga+Pa-Gb-Pb << '\n';

	fout << Pa-Pb;

	fin.close();
	fout.close();	
	return 0;
}