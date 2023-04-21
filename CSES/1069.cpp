/**
 * author: matyaskrizbai
 * created: 2023.April.21 21:50:42
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
    string s;
    cin >> s;
    int x, maxlen=0, len=1;
    for(int i=1; i<s.size(); i++){
    	if(s[i]==s[i-1]) len++;
    	else{
    		if(len > maxlen) maxlen = len;
    		len = 1;
    	}
    }
    cout << max(maxlen, len);
    return 0;
}