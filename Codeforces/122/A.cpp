#include <iostream>

using namespace std;

bool lucky(int x)
{
    while(x>0){
        if(x%10!=7 && x%10!=4)
            return false;
        x/=10;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        if(lucky(i) && n%i==0){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
