#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector < int > v(26);
    string s;
    getline(cin,s);
    if(s.size()==2){
        cout << 0;
        return 0;
    }
    for(int i=1; i<s.size(); i+=3){
        v[s[i]-'a']=1;
    }
    int ans=0;
    for(auto &it : v){
        if(it)
            ans++;
    }
    cout << ans;
    return 0;
}
