#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string s;
    int n;
    cin >> n;
    cin.get();
    for(int i=0;i<n;i++){
        int j=0;
        getline(cin,s);
        while(j<s.size()-1){
            if(strchr(".,!?",s[j])!=NULL)
                s.erase(j,1);
            else
                j++;
        }
        cout << s << '\n';
    }
    return 0;
}
