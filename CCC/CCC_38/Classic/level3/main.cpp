#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <queue>
#include <fstream>
#include <sstream>

using namespace std;

ifstream fin("level3_5.in");
ofstream fout("level3_5.out");

const int MAXN=250;

vector<vector<char>> mat(MAXN, vector<char>(MAXN));

vector<pair<int, int>> vp;

int n;

bool valid() {
	int x1=vp[0].first;
	int y1=vp[0].second;
	mat[x1][y1]='V';
	vp.erase(vp.begin());
	for(auto it : vp) {
		int x=it.first;
		int y=it.second;
		if(mat[x][y]=='V') {
			return false;
		}
		else {
			if(x!=x1 && y!=y1) {
				if(mat[x][y1]=='V' && mat[x1][y]=='V') {
					return false;
				}
			}
		}
		mat[x][y]='V';
		x1=x;
		y1=y;
	}
	return true;
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
	fin.get();
	while(q--) {
		string sor;
		getline(fin, sor);
		for(int i=0; i<sor.size(); i++) {
			if(sor[i]==',') sor[i]=' ';
		}
		stringstream ss(sor);
		int x, y;
		while(ss >> y >> x) {
			vp.push_back(make_pair(x, y));
		}
		if(valid()) {
			fout << "VALID\n";
		}
		else {
			fout << "INVALID\n";
		}
		vp.clear();
		mat=masolat;
	}
	return 0;
}