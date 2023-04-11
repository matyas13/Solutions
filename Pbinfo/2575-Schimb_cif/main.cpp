#include <iostream>

using namespace std;

int f(long long x)
{
    while(x>9)
        x/=10;
    return x;
}

void ogl(long long x)
{
    if(x<=9){
        cout << x;
        return;
    }
    cout << f(x);
    while(x>9){
        cout << x%10;
        x/=10;
    }
    return;
}

int main()
{
    long long n,x;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        if(x<10)
            cout << x << ' ';
        else{
            ogl(x/10);
            cout << x%10 << ' ';
        }
    }
    return 0;
}
