#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1,str2="";
    getline(cin,str1);
    if(isupper(str1[0]))
        str2.push_back(str1[0]);
    for(int i=1; i<str1.size(); ++i){
        if(isupper(str1[i]) && str1[i-1]==' ')
            str2.push_back(str1[i]);
    }
    cout << str2;
    return 0;
}
