#include <iostream>

using namespace std;

int n, S, v[7], c[7], x[7];
bool ok=false;

void afis(){
   for(int i=1; i<=n; i++){
      cout << x[i]+1 << ' ';
   }
   ok=true;
}

void back(int k, int sum){
   for(int i=0; i<=c[k] && sum+i*v[k]<=S && !ok; i++){
      sum+=i*v[k];
      x[k]=i;
      if(sum==S){
         afis();
      }
      else if(k<n)
         back(k+1, sum);
      sum-=i*v[k];
   }
}

int main(){
   cin >> n >> S;
   for(int i=1; i<=n; i++){
      cin >> v[i];
   }
   for(int i=1; i<=n; i++){
      cin >> c[i];
      c[i]--;
      S-=v[i];
   }
   back(1, 0);
   return 0;
}
