#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    for(int i=0;i<s2.size();i++){
        if(strchr("aeoiu",s1[i])==NULL && strchr("aeoiu",s2[i])==NULL)
            cout << '#';
        else if(strchr("aeoiu",s1[i])!=NULL && strchr("aeoiu",s2[i])!=NULL)
            cout << '*';
        else
            cout << '?';
    }
    return 0;
}
