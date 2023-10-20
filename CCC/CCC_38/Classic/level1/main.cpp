#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <queue>
#include <fstream>

using namespace std;

ifstream fin("level2_5.in");
ofstream fout("level2_5.out");

int main() {
	int n;
	fin >> n;
	vector<vector<char>> mat(n, vector<char>(n));
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			fin >> mat[i][j];
		}
	}
	int q;
	fin >> q;
	while(q--) {
		int a, b;
		char c;
		fin >> a >> c >> b;
		fout << mat[b][a] << '\n';
	}
	return 0;
}