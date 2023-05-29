#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("ecu2.in");
ofstream fout("ecu2.out");

int main(){
 	int tt;
 	fin >> tt;
 	while(tt--){
 		int a, b, c;
 		fin >> a >> b >> c;
 		if(a==0 && b==0 && c==0){
 			fout << "INF" << '\n';
 			continue;
 		}
 		if(a==0 && b==0){
 			fout << 0 << '\n';
 			continue;
 		}
 		if(a==0){
 			fout << 1 << '\n';
 			continue;
 		}

 		int delta=b*b-4*a*c;
 		if(delta>0){
 			fout << 2 << '\n';
 			continue;
 		}
 		else if(delta==0){
 			fout << 1 << '\n';
 			continue;
 		}
 		fout << 0 << '\n'; 
 	} 	
   return 0;
}