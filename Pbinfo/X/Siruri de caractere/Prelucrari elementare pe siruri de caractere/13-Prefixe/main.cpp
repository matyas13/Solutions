#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str,str2;
    cin >> str;
    for(int i=str.size(); i>0; i--){
        str2=str.substr(0,i);
        cout << str2 << '\n';
    }
    for(int i=0;i<str.size();i++){
        str2=str.substr(i,str.size());
        cout << str2;
        if(i<str.size()-1)
            cout << '\n';
    }
    return 0;
}
