#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string s;
    cin >> s;
    char x;
    int len=0,maxlen=-1,beg;
    for(int i=0;i<s.size();i++){
        if(strchr("aeoiu",s[i])==NULL)
        {
            len++;
            x=s[i];
        }
        else{
            if(len>=maxlen){
                maxlen=len;
                beg=i-len;
            }
            len=0;
        }
    }
    if(len>=maxlen){
        maxlen=len;
        beg=s.size()-len;
    }
    s=s.substr(beg,maxlen);
    cout << s;
    return 0;
}
