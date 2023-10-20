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

const int MAXN=10000;

vector<vector<char>> mat(MAXN, vector<char>(MAXN));

int n;
int x1, y1, x2, y2;

int C_x[]={-1, 1, 0, 0};
int C_y[]={0, 0, 1, -1};

int rajta_van;

void dfs(int i, int j) {
	mat[i][j]='W';
	//cout << i << ' ' << j << '\n';
	if(x2==i && y2==j) {
		rajta_van++;
		return;
	}
	for(int k=0; k<4; k++) {
		int tox=i+C_x[k];
		int toy=j+C_y[k];
		//cout << tox << ' ' << toy << '\n';
		if(tox>=0 && tox<n && toy>=0 && toy<n && mat[tox][toy]=='L') {
			bfs(tox, toy);
		}
	}
}

int main() {
	fin >> n;
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			fin >> mat[i][j];
		}
	}
	vector<vector<char>> masolat=mat;
	int q;
	fin >> q;
	while(q--) {
		char c;
		fin >>y1 >> c >> x1 >> y2 >> c >> x2;
		mat=masolat;
		dfs(x1, y1);
		if(rajta_van==1) {
			fout << "SAME\n";
		}
		else {
			fout << "DIFFERENT\n";
		}
		rajta_van=0;
	}
	return 0;
}