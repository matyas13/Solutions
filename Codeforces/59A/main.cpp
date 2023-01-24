#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int cnt=0;
    for(int i=0; i<s.size(); i++){
        if(islower(s[i]))
            cnt++;
    }
    if(s.size()-cnt<=cnt){
        for(int i=0; i<s.size(); i++){
            cout << (char)tolower(s[i]);
        }
    }
    else{
        for(int i=0; i<s.size(); i++){
            cout << (char)toupper(s[i]);
        }
    }
    return 0;
}
