#include <iostream>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, m, upmostcol=10, rightmostcol=10;
    char cell;
    bool first=false;
    cin >> n >> m;
    for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
        cin >> cell;
        if(cell=='R'){
          if(!first){
            upmostcol = j;
            first = true;
          }
          rightmostcol = min(rightmostcol, j);
        }
      }
    }
    cout << (rightmostcol == upmostcol ? "YES\n" : "NO\n");
  }
  return 0;
}
