#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    int ans=0;
    string s;
    getline(cin,s);
    for(int i=1;i<s.size();i++){
        if(strchr("aeiou ",s[i-1])==NULL && strchr("aeiou ",s[i+1])==NULL && strchr("aeiou",s[i])!=NULL){
            ans++;
        }
    }
    cout << ans;
    return 0;
}
