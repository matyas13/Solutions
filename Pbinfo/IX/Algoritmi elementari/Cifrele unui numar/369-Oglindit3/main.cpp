#include <iostream>

using namespace std;

int ogl(int x)
{
    int fx=0;
    while(x>0){
        fx=fx*10+x%10;
        x/=10;
    }
    return fx;
}

int sum(long long x)
{
    int sum=0;
    while(x>0){
        sum+=x%10;
        x/=10;
    }
    return sum;
}

int main()
{
    long long n;
    cin >> n;
    cout << ogl(sum(n));
    return 0;
}
