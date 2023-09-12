#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

ifstream fin("shell.in");
ofstream fout("shell.out");

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);  
  int n;
  fin >> n;
  vector<int> v(n);
  for(int i=0; i<n; i++)
  	v[i]=i;
  vector<int> cnt(n);
  for(int i=0; i<n; i++) {
  	int a, b, c;
  	fin >> a >> b >> c;
  	a--;
  	b--;
  	c--;
  	swap(v[a], v[b]);
  	cnt[v[c]]++;
  }
  fout << max(cnt[0], max(cnt[1], cnt[2]));
  return 0;
}