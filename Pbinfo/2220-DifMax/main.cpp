#include <iostream>
#include <algorithm>
#include <vector>

#define MINMAX -1000000001

using namespace std;

bool is_sorted(vector <int> v, int n){
   for(int i=1; i<n; i++){
      if(v[i]<=v[i-1]){
         return false;
      }
   }
   return true;
}

int main(){
 	int n;
 	cin >> n;
 	vector <int> a(n);
 	for(int i=0; i<n; i++)
 		cin >> a[i];
 	if(is_sorted(a, n)){
      int maxi=MINMAX;
      for(int i=0; i<n; i++){
         for(int j=i+1; j<n; j++){
            maxi=max(maxi, a[i]-a[j]);
         }
      }
      cout << maxi;
      return 0;
   }
 	vector <int> maxi(n);
 	maxi[0]=a[0];
 	for(int i=1; i<n; i++){
 		maxi[i]=max(maxi[i-1], a[i]);
 	}

 	int mini=a[n-1];
 	maxi[n-1]-=mini;
 	for(int i=n-2; i>=0; i--){
 		mini=min(mini, a[i]);
      maxi[i]-=mini;
 	}
 	sort(maxi.begin(), maxi.end());
 	cout << maxi[n-1];
   return 0;
}