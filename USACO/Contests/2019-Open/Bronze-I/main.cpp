#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("buckets.in");
ofstream fout("buckets.out");

int main(){
	int xB, yB, xR, yR, xL, yL;
	string s;
	for(int i=0; i<10; i++){
		fin >> s;
		for(int j=0; j<10; j++){
			if(s[j]=='L'){
				xL=i;
				yL=j;
			}
			else if(s[j]=='B'){
				xB=i;
				yB=j;
			}
			else if(s[j]=='R'){
				xR=i;
				yR=j;
			}
		}
	}

	int LB=abs(xL-xB)+abs(yL-yB);
	int RB=abs(xR-xB)+abs(yR-yB);
	int LR=abs(xL-xR)+abs(yL-yR);
	if(LB==LR+RB && (xL==xB || yL==yB)){
		fout << LB+1;
	}
	else{
		fout << LB-1;
	}

	fin.close();
	fout.close();
	return 0;
}