#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char x;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        if(strchr("codeforces",x)!=NULL)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
