/**
 * author: matyaskrizbai
 * created: 2023.April.20 09:29:08
 **/ 
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

//#define whoami

void skillissue(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifdef whoami
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

int main(){
 	skillissue();
    int n, m, k;
    cin >> n >> m >> k;
   	vector <int> applicants(n);
   	vector <int> apartments(m);

   	for(int i=0; i<n; i++) cin >> applicants[i];
   	for(int i=0; i<m; i++) cin >> apartments[i];

   	sort(applicants.begin(), applicants.end());
   	sort(apartments.begin(), apartments.end());

   	int i=0, j=0, cnt=0;
   	while(i<n && j<m){
   		if(abs(applicants[i] - apartments[j])<=k){
   			cnt++;
   			i++;
   			j++;
   		}
   		else if(applicants[i]-apartments[j]>k) j++;
   		else i++;
   	}
   	cout << cnt;
    return 0;
}