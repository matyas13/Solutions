#include <iostream>

using namespace std;

bool prime(int x) {
    if(x%2==0)
        return x==2;
    for(int i=3; i*i<=x; i+=2){
        if(x%i==0)
            return false;
    }
    return true;
}

int main()
{
    int a, b;
    cin >> a >> b;
    for(int i=a+1; i<b; i++){
        if(prime(i)){
            cout << "NO";
            return 0;
        }
    }
    if(prime(b))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
