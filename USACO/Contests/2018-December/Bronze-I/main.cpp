#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("mixmilk.in");
ofstream fout("mixmilk.out");

int main(){
	int c1, m1, c2, m2, c3, m3, op=1;
	fin >> c1 >> m1 >> c2 >> m2 >> c3 >> m3;
	for(int i=0; i<100; i++){
		if(op==1){
			if(m2+m1<=c2){
				m2=m2+m1;
				m1=0;
			}
			else{
				m1=m1-(c2-m2);
				m2=c2;
			}
			op++;
		}
		else if(op==2){
			if(m3+m2<=c3){
				m3=m3+m2;
				m2=0;
			}
			else{
				m2=m2-(c3-m3);
				m3=c3;
			}
			op++;
		}
		else{
			if(m3+m1<=c1){
				m1=m1+m3;
				m3=0;
			}
			else{
				m3=m3-(c1-m1);
				m1=c1;
			}
			op=1;
		}

	}
	fout << m1 << '\n' << m2 << '\n' << m3;
	fin.close();
	fout.close();
	return 0;
}