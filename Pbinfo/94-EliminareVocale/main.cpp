#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    char voc[]="aeoiu";
    for(int i=0;i<s.size();i++){
        if(strchr(voc,s[i])==NULL)
            cout << s[i];
    }
    return 0;
}
