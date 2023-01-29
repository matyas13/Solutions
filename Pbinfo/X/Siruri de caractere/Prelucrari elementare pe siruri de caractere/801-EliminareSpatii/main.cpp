#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s,x="";
    getline(cin,s);
    int j=0;
    while(j<s.size()-1){
        if(s[j]!=' ')
            x.push_back(s[j]);
        else if(!x.empty() && s[j]==' ' && s[j+1]!=' ')
            x.push_back(s[j]);
        j++;
    }
    x.push_back(s[s.size()-1]);
    cout << x;
    return 0;
}
