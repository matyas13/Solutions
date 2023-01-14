#include <iostream>

using namespace std;

int main()
{
    int n;
    long long a,b,sum=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        if(a<b)
            sum+=a;
        else
            sum+=b;
    }
    cout << sum;
    return 0;
}
