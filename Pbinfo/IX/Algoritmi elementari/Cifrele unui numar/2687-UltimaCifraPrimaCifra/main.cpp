#include <iostream>

using namespace std;

int first(int x)
{
    while(x>9)
        x/=10;
    return x;
}

int main()
{
    int n, x, y;
    cin >> n >> x;
    for(int i=1;i<n;i++){
        cin >> y;
        if(x%10==first(y))
            cout << x << ' ' << y << '\n';
        x=y;
    }
    return 0;
}
