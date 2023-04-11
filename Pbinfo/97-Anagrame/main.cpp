#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    if(s1.size()!=s2.size()){
        cout << 0;
        return 0;
    }
    int freq1[26]={0},freq2[26]={0};
    for(int i=s1.size()-1;i>=0;i--){
        freq1[s1[i]-'a']++;
        freq2[s2[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(freq1[i]!=freq2[i]){
            cout << 0;
            return 0;
        }
    }
    cout << 1;
    return 0;
}
