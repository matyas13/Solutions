#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, maxi=-1;
    cin >> n;
    vector < int > v(n);
    for(int &it : v){
        cin >> it;
        if(it>maxi)
            maxi=it;
    }

    int ans=0;
    for(int &it : v){
        ans+=maxi-it;
    }

    cout << ans;
    return 0;
}
