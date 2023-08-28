#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("paint.in");
ofstream fout("paint.out");

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);  
  int a, b, c, d;
  fin >> a >> b >> c >> d;
  if((b<c) || (d<a))
    fout << b-a+d-c;
  else
    fout << max(b, d)-min(a, c);
  return 0;
}