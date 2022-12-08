#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    if(a+1==b && a%2==0 || b+1==a && b%2==0)
        cout << "Andrei e mai responsabil";
    else
        cout << "minciuna";
    return 0;
}
