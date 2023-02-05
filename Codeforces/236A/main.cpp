#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<bool> v(26);
    v.assign(26,false);
    for(int i=s.size()-1;i>=0;i--){
        v[s[i]-'a']=true;
    }
    int cnt=0;
    for(int i=0;i<26;i++){
        if(v[i])
            cnt++;
    }
    (cnt%2==0) ? cout << "CHAT WITH HER!" : cout << "IGNORE HIM!";
    return 0;
}
