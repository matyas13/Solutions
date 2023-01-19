#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    while(a>0){
        if(a%10+b%10>9){
            cout << "DA";
            return 0;
        }
        a/=10;
        b/=10;
    }
    cout << "NU";
    return 0;
}
