/**
 * author: matyaskrizbai
 * created: 2023.April.21 21:46:30
 **/ 

#include <iostream>
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
    long long n, x, y, sum=0;
    cin >> n >> x;
    for(int i=1; i<n; i++){
    	cin >> y;
    	if(y<x) sum = sum + (x - y);
    	else x = y;
    }
    cout << sum;
    return 0;
}