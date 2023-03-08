#include <iostream>

using namespace std;

int main()
{
    int n, sum=0, h=0;
    cin >> n;
    while(sum<=n){
        h++;
        sum+=(h*(h+1))/2;
    }
    cout << h-1;
    return 0;
}
