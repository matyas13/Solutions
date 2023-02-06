#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char a[101], b[101];
    cin >> a >> b;
    strrev(b);
    if(strcmp(a,b)==0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
