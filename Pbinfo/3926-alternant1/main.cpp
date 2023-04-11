#include <iostream>

using namespace std;

bool alter(long long n)
{
    int k=n%10;
    n/=10;
    while(n>0){
        if((n%10+k)%2==0)
            return false;
        k=n%10;
        n/=10;
    }
    return true;
}

int main()
{
    long long n;
    cin >> n;
    if(alter(n))
        cout << "da";
    else
        cout << "nu";
    return 0;
}
