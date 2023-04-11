#include <iostream>

using namespace std;

int rev(int x)
{
    int rx=0;
    while(x>0){
        rx=rx*10+x%10;
        x/=10;
    }
    return rx;
}

int main()
{
    int n;
    cin >> n;
    cout << rev(n);
    return 0;
}
