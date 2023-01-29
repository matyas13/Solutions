#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    int freq[26]={0};
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(islower(s[i])){
            freq[s[i]-'a']++;
        }
    }
    int maxpos=0;
    for(int i=1;i<26;i++){
        if(freq[i]>freq[maxpos])
            maxpos=i;
    }
    cout << (char)(maxpos+'a');
    return 0;
}
