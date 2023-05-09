#include <iostream>
#include <map>

using namespace std;

void desc(int x, map <int, int> &mp){
   int d=2;
   while(x!=1){
      if(x%d==0){
         mp[d]++;
         while(x%d==0){
            x/=d;
         }
      }
      d++;
      if(d*d>x){
         d=x;
      }
   }
}

int main(){
   int n, x, y, maxsum=-1, s1, s2;
   cin >> n >> x;
   for(int i=1; i<n; i++){
      cin >> y;
      int sum=x+y;
      map <int, int> mp;
      desc(x, mp);
      desc(y, mp);
      bool ok=true;
      for(auto it : mp){
         if(it.second==1){
            ok=false;
         }
      }
      if(ok){
         if(sum>maxsum){
            maxsum=sum;
            s1=x;
            s2=y;
         }
      }
      x=y;
   }
   if(maxsum==-1){
      cout << "NU EXISTA";
   }
   else{
      cout << s1 << ' ' << s2;
   }
   return 0;
}
