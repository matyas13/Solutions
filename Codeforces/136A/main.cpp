#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, x;
    cin >> n;
    vector< int > v(n);
    for(int i=1; i<=n; i++){
        cin >> x;
        v[x]=i;
    }
    for(int i=1; i<=n; i++){
        cout << v[i] << ' ';
    }
    return 0;
}
