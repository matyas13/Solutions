#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    bool ch=false;
    string str;
    cin >> str;
    for(int i=0; i<str.size(); ++i){
        if(strchr("aeou",str[i])!=NULL){
            cout << "NU";
            return 0;
        }
        else if(str[i]!='i')
            ch=true;
    }
    if(!ch)
        cout << "NU";
    else
        cout << "DA";
    return 0;
}
