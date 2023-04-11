#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    do
    {
        if(n%10>k){
            cout << "NU";
            return 0;
        }
        n/=10;
    }while(n!=0);
    cout << "DA";
    return 0;
}
