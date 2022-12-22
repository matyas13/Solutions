#include <iostream>

using namespace std;

int main()
{
    int sum=0,x;
    do
    {
        cin >> x;
        sum+=x;
    }while(x!=0);
    cout << sum;
    return 0;
}
