#include <iostream>

using namespace std;

int main()
{
    int n,cnt=0;
    long long A,R;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> A >> R;
        if(A*(A+1)*(A+2)*(A+3)+1==R*R)
            cnt++;
    }
    cout << cnt;
    return 0;
}
