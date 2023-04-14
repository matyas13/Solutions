#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("square.in");
ofstream fout("square.out");

struct rectangle{
	int x1, y1, x2, y2;
};

int area(rectangle a, rectangle b){
	int left=min(a.x1, b.x1);
	int right=max(a.x2, b.x2);
	int bottom=min(a.y1, b.y1);
	int top=max(a.y2, b.y2);
	int side=max(right -left, top-bottom);
	return side*side;
}

int main(){
	rectangle a, b;
	fin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
	fin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
	fout << area(a, b);
	fin.close();
	fout.close();
	return 0;
}