#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        vector < int > v(3);
        for(int &it : v){
            cin >> it;
        }

        sort(v.begin(), v.end());

        int n;
        cin >> n;
        n=n-(v[2]-v[1]+v[2]-v[0]);
        if(n>=0 && n%3==0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
