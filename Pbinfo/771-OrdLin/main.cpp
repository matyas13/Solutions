#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
   return a.second < b.second;
}

int main(){
   int n, m;
   cin >> n >> m;
   vector <vector<int>> mat(n, vector<int>(m));
   vector <pair<int, int>> vs(n);
   for(int i=0; i<n; i++){
      int s=0;
      for(int j=0; j<m; j++){
         cin >> mat[i][j];
         s+=mat[i][j];
      }
      vs[i]=make_pair(i, s);
   }


   sort(vs.begin(), vs.end(), cmp);
   for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
         cout << mat[vs[i].first][j] << ' ';
      }
      cout << '\n';
   }
   return 0;
}
