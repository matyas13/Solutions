#include <iostream>
#include <string>

using namespace std;

int main()
{
    int tt;
    string str;
    cin >> tt;
    while(tt--){
        cin >> str;
        if(str.size()>10)
            cout << str[0] << str.size()-2 << str[str.size()-1] << '\n';
        else
            cout << str << '\n';
    }
    return 0;
}
