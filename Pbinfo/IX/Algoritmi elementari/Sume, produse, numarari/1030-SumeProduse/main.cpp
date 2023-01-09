#include <iostream>

using namespace std;

int main()
{
    long long sum1=0,sum2=0;
    int a[100001],n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    while(int i=0;i<n/2;i++){
        sum1+=a[i];
    }
    for(int i=n/2;i<n;i++){
        sum2+=a[i];
    }
    cout << sum1*sum2;

    return 0;
}
