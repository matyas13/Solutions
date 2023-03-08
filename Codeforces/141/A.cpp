#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector < int > v(26), v2(26);
    string s;
    cin >> s;
    for(int i=s.size()-1; i>=0; i--){
        v[s[i]-'A']++;
    }

    cin >> s;
    for(int i=s.size()-1; i>=0; i--){
        v[s[i]-'A']++;
    }

    cin >> s;
    for(int i=s.size()-1; i>=0; i--){
        v2[s[i]-'A']++;
    }

    for(int i=0; i<26; i++){
        if(v[i]!=v2[i]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
