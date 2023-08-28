#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

ifstream fin("speeding.in");
ofstream fout("speeding.out");

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);  
  int n, m;
  fin >> n >> m;
  int k=1, tav, seb;
  vector<int> ut(101), bes(101);
  for(int i=0; i<n; i++) {
    fin >> tav >> seb;
    for(int j=0; j<tav; j++) {
      ut[k++]=seb;
    }
  }
  k=1;
  for(int i=0; i<m; i++) {
    fin >> tav >> seb;
    for(int j=0; j<tav; j++) {
      bes[k++]=seb;
    }
  }
  int maxi=0;
  for(int i=1; i<=100; i++) {
    maxi=max(maxi, bes[i]-ut[i]);
  }
  fout << maxi;
  return 0;
}