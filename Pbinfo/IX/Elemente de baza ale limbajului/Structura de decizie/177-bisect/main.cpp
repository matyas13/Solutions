#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    (n%400==0) ? cout << "bisect" : ((n%4==0 && n%100!=0) ? cout << "bisect" : cout << "nebisect");
    return 0;
}
