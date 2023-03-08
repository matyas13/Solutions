#include <iostream>

using namespace std;

int dig(int x)
{
    int cnt=0;
    do
    {
        if(x%10!=0)
            cnt++;
        x/=10;
    }while(x!=0);
    return cnt;
}

int main()
{
    int n, x;
    cin >> n;
    for(int i=0; i<n; ++i){
        cin >> x;
        cout << dig(x) << '\n';
        int p=1;
        while(x!=0){
            if(x%10!=0)
                cout << p*(x%10)<< ' ';
            p*=10;
            x/=10;
        }
        cout << '\n';
    }
    return 0;
}
