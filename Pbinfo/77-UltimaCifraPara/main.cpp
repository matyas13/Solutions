#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    do
    {
        if(n%2==0){
            cout << n%10;
            return 0;
        }
        n/=10;
    }while(n>0);
    cout << -1;
    return 0;
}