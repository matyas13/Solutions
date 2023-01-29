#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    for(int i=0;i<s2.size();i++){
        if(strchr("aeoiuAEIOU",s2[i])==NULL)
            cout << s2[i];
    }
    cout << ' ' << s1;
    return 0;
}
