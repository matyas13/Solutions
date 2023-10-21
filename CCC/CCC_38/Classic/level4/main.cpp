#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <queue>
#include <fstream>
#include <iomanip>

using namespace std;

ifstream fin("level4_5.in");
ofstream fout("level4_5.out");

const int MAXN=250;

vector<vector<char>> mat(MAXN, vector<char>(MAXN));
vector<vector<int>> ertekek(MAXN, vector<int>(MAXN, 99999));
vector<vector<int>> SSS(MAXN, vector<int>(MAXN, 99999));
vector<pair<int, int>> jo_ut;

int n;
int x1, x2, y1, y2;

int C_x[]={-1, 1, 0, 0, -1, 1, 1, -1};
int C_y[]={0, 0, 1, -1, -1, 1, -1, 1};

void bfs(int i, int j) {
	queue<pair<int, int>> q;
	mat[i][j]='L';
	ertekek[x1][y1]=0;
	q.push(make_pair(i, j));
	while(!q.empty()) {
		int jx=q.front().first;
		int jy=q.front().second;
		q.pop();
		int ertek=ertekek[jx][jy];
		for(int k=0; k<8; k++) {
			int tox=jx+C_x[k];
			int toy=jy+C_y[k];
			
			if(tox>=0 && tox<n && toy>=0 && toy<n && mat[tox][toy]=='W') {
				ertekek[tox][toy]=ertek+1;
				if(tox==x2 && toy==y2) {
					return;
				}
				q.push(make_pair(tox, toy));
				mat[tox][toy]='L';
			}
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
		fin >> y1 >> c >> x1 >> y2 >> c >> x2;
		bfs(x1, y1);
		vector<pair<int, int>> ans;
		bool felt=false;
		int jx=x2;
		int jy=y2;
		while(!felt) {
			int jelen=ertekek[jx][jy];
			for(int k=0; k<8; k++) {
				int tox=jx+C_x[k];
				int toy=jy+C_y[k];
				
				if(tox>=0 && tox<n && toy>=0 && toy<n && ertekek[tox][toy]<jelen) {
					jelen=ertekek[tox][toy];
					jx=tox;
					jy=toy;
					ans.push_back(make_pair(toy, tox));
					break;
				}
			}
			if(jx==x1 && jy==y1) {
				felt=true;
			}
		}
		for(auto it : ans) {
			fout << it.first << ',' << it.second << ' ';
		}
		fout << '\n';
		ertekek=SSS;
		mat=masolat;
	}
	return 0;
}