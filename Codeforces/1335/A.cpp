#include <iostream>

using namespace std;

int main()
{
    int n, x;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        cout << (x-1)/2 << '\n';
    }
    return 0;
}
