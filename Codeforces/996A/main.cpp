#include <iostream>

using namespace std;

int main()
{
    int n, b[5]={100, 20, 10, 5, 1}, ans=0;
    cin >> n;
    for(int i=0; i<5; ++i){
        while(n-b[i]>=0){
            n-=b[i];
            ans++;
        }
    }
    cout << ans;
    return 0;
}
