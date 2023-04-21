/**
 * author: matyaskrizbai
 * created: 2023.April.21 21:25:32
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
    unsigned long long n;
    cin >> n;
    while(n!=1){
    	cout << n << ' ';
        if(n%2==0) n/=2;
        else n=n*3+1;
    }
    cout << n;
    return 0;
}