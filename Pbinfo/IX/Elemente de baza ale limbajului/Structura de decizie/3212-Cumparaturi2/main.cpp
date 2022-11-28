#include <iostream>

using namespace std;

int main()
{
    int S, d, r, m;
    cin >> S >> d >> r >> m;
    (S>=d) ? cout << "drona" : ((S>=r) ? cout << "robot" : ((S>=m) ? cout << "masina" : cout << "nimic"));
    return 0;
}
