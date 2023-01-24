#include <iostream>

using namespace std;

int main()
{
    int w;
    cin >> w;
    if(w<4 || w%2==1)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}
