#include <iostream>

using namespace std;

int main()
{
    int n, x, y;
    cin >> n;
    for(int i=0; i<n; ++i){
        cin >> x >> y;
        if(x%y==0)
            cout << 0 << '\n';
        else
            cout << y-(x%y) << '\n';
    }
    return 0;
}
