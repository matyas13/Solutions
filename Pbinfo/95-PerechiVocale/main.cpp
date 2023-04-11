#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int ans=0;
    char voc[]="aeoiu";
    for(int i=s.size()-1;i>0;i--){
        if(strchr(voc,s[i])!=NULL && strchr(voc,s[i-1])!=NULL)
            ans++;
    }
    cout << ans;
    return 0;
}
