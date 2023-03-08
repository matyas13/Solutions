#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int n;
    cin >> n >> s;
    bool app[26]={0};
    for(int i=0; i<n; i++){
        app[tolower(s[i])-'a']=true;
    }
    for(int i=0; i<26; i++){
        if(!app[i]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
