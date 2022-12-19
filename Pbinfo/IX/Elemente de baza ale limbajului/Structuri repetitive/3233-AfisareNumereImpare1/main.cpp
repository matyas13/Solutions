#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n%2==0)
        n--;
    for(int i=n;i>=1;i-=2)
        cout << i << ' ';
    return 0;
}
