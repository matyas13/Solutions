#include <iostream>

using namespace std;

int main()
{
    int n,maxi=-1;
    cin >> n;
    while(n>0){
        if(n%2==1 && n%10>maxi)
            maxi=n%10;
        n/=10;
    }
    if(maxi%2==1)
        cout << maxi;
    else
        cout << "nu exista";
    return 0;
}
