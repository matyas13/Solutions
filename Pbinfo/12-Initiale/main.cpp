#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    getline(cin,str);
    str[0]=toupper(str[0]);
    for(int i=1; i<str.size(); i++){
        if((str[i-1]==' ' && islower(str[i])) || (str[i+1]==' ' && islower(str[i])))
            str[i]=toupper(str[i]);
    }
    str[str.size()-1]=toupper(str[str.size()-1]);
    cout << str;
    return 0;
}
