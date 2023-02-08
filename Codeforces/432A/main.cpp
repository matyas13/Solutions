#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, k, cnt=0, x;
    cin >> n >> k;
    for(int i=0; i<n; ++i){
        cin >> x;
        if(5-x>=k)
            cnt++;
    }
    cout << cnt/3;
    return 0;
}
