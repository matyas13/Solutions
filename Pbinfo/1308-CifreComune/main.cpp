#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    if(a%10==b%10 || a%10==b/10%10 || b%10==a/10%10 || b/10%10==a/10%10)
        cout << "da";
    else
        cout << "nu";
    return 0;
}
