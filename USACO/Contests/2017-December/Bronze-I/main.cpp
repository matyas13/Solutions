#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("billboard.in");
ofstream fout("billboard.out");

struct rectangle{
	int x1, x2, y1, y2;
	int area(){
		return (y2-y1)*(x2-x1);
	}
};

int intersect(rectangle a, rectangle b){
	int xOverlap = max(0, min(a.x2, b.x2) - max(a.x1, b.x1));
	int yOverlap = max(0, min(a.y2, b.y2) - max(a.y1, b.y1));
	return xOverlap*yOverlap;
}

int main(){
	struct rectangle a, b, t;
	fin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
	fin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
	fin >> t.x1 >> t.y1 >> t.x2 >> t.y2;
	fout << a.area() + b.area() - intersect(a, t) - intersect(b, t);
	fin.close();
	fout.close();
	return 0;
}