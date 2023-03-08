#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector < int > v(26);
    char x;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> x;
            v[x-'A']++;
        }
    }

    if(v['C'-'A']+v['M'-'A']+v['Y'-'A']==0)
        cout << "#Black&White";
    else
        cout << "#Color";
    return 0;
}
