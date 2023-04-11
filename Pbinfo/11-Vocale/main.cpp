#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(strchr("aeiou",s[i])!=NULL)
            s[i]=toupper(s[i]);
    }
    cout << s;
    return 0;
}
