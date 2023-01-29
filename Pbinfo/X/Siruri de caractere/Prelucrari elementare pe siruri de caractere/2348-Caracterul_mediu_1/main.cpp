#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int cnt=0,sum=0;
    for(int i=0;i<s.size();i++){
        if(!isupper(s[i]) && strchr(" aeiou",s[i])==NULL){
            sum+=s[i];
            cnt++;
        }
    }
    cout << (char)(sum/cnt);
    return 0;
}
