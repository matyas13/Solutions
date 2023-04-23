#include <iostream>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    string s;
    int n;
    cin >> n >> s;
    bool ok = false;
    for(int i=0; i<=4; i++){
      if(s.substr(0, i)+s.substr(n-4+i, 4-i)=="2020"){
        ok = true;
        break;
      }
    }
    cout << (ok ? "YES\n" : "NO\n");
  }
  return 0;
}
