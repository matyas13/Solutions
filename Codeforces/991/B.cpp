#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
   int n;
   cin >> n;
   vector <int> v(n);
   double sum=0;
   for(auto & it : v){
      cin >> it;
      sum+=it;
   }
   sort(v.begin(), v.end());
   double desired=4.5*n;
   int cnt=0, i=0;
   while(sum<desired){
      cnt++;
      sum=sum+5-v[i++];
     }
   cout << cnt << '\n';
   return 0;
}
