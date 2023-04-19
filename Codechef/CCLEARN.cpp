/**
 * author: matyaskrizbai
 * created: 2023.April.19 17:32:52
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
    int n;
    cin >> n;
    cout << 2*n;
    return 0;
}