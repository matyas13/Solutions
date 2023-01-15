#include <iostream>

using namespace std;

void check(int n)
{
    int n1=0,n2=0;
    while(n>0){
        if(n%10==1)
            n1++;
        else if(n%10==0)
            n2++;
        else{
            cout << "nu";
            return ;
        }
        n/=10;
    }
    if(n1*n2==0)
        cout << "nu";
    else
        cout << "da";
}

int main()
{
    int n;
    cin >> n;
    check(n);
    return 0;
}
