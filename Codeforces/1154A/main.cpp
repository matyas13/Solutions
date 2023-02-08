#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector < int > v(4);
    for(int i=0; i<4; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    int c=v[3]-v[0];
    cout << v[1]-c << ' ' << v[2]-c << ' ' << c;
    return 0;
}
