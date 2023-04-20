/**
 * author: matyaskrizbai
 * created: 2023.April.20 09:21:48
 **/ 
#include <iostream>
#include <cstdio>
#include <set>

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
 	int n, x;
 	set <int> us;
 	cin >> n;
 	for(int i=0; i<n; i++){
 		cin >> x;
 		us.insert(x);
 	}
 	cout << us.size();
    return 0;
}