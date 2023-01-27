#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    char voc[]="aeiou";
    string s,s2 ("");
    getline(cin,s);
    bool ch=false;
    for(int i=0; i<s.size(); i++){
        s2.push_back(s[i]);
        if(strchr(voc,s[i])!=NULL){
                ch=true;
                s2.push_back('*');
        }
    }
    if(!ch)
        cout << "FARA VOCALE";
    else
        cout << s2;
    return 0;
}
