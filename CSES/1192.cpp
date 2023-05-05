#include <iostream>
#include <vector>

using namespace std;

int X[]={-1, 1, 0, 0};
int Y[]={0, 0, -1, 1};
int n, m;
vector <vector<bool>> v(1000, vector<bool> (1000));


void dfs(vector<vector<bool>> &v, int x, int y){
   v[x][y]=true;
   for(int i=0; i<4; i++){
      int a=x+X[i];
      int b=y+Y[i];
      if(a>=0 && a<n && b>=0 && b<m && !v[a][b]){
         dfs(v, a, b);
      }
   }
}

int main(){
   cin >> n >> m;
   char c;
   for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
         cin >> c;
         v[i][j]=(c=='#');
      }
   }
   int cnt=0;
   for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
         if(!v[i][j]){
            cnt++;
            dfs(v, i, j);
         }
      }
   }
   cout << cnt;
   return 0;
}
