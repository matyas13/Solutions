#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, s2, s3;
    cin >> s;
    s2=s;
    s2.erase(0,1);
    for(int i=0;i<s.size();i++){
        s3=s;
        s3.erase(i,1);
        if(s3>s2)
            s2=s3;
    }
    cout << s2;
    return 0;
}
