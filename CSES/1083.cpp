/**
 * author: matyaskrizbai
 * created: 2023.April.21 21:27:47
 **/ 

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

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
    long long n, x, s;
    cin >> n;
   	s = n*(n+1)/2;
   	for(int i=0; i<n-1; i++){
   		cin >> x;
   		s-=x;
   	}
   	cout << s;
    return 0;
}