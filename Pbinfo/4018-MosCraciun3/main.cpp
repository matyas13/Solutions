#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int p, k;
    cin >> s >> p >> k;
    if(p+k>s.size()){
        cout << "imposibil";
        return 0;
    }
    string s2;
    int j=s.size()-1;
    for(int i=0;i<k;i++){
        s2.push_back(s[j--]);
    }
    string s3=s.substr(p,s.size()-p-k);
    string s4;
    for(int i=p;i>0;i--){
        s4.push_back(s[i-1]);
    }
    cout << s4+s3+s2;
    return 0;
}
