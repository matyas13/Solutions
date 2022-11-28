#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    (a%10==a/10%10) ? ((a%10==a/100) ? cout << "da" : cout << "nu") : cout << "nu";
    return 0;
}
