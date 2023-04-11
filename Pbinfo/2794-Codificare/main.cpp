#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s,cod;
    cin >> s >> cod;
    if(s.size()!=cod.size()){
        cout << "cod incorect";
        return 0;
    }
    string x="";
    for(int i=s.size()-1;i>0;i--){
        if((cod[i]-'0')%2==0){
            x.push_back(s[i]);
        }
    }
    x.push_back(s[0]);
    for(int i=1;i<s.size();i++){
        if((cod[i]-'0')%2!=0){
            x.push_back(s[i]);
        }
    }
    cout << x;
    return 0;
}
