#include <iostream>

using namespace std;

int main()
{
    int a, ossz=0;
    cin >> a;
    ossz=a;
    ossz=ossz + (a/100*10+a%10)*10+(a/10%10);
    ossz=ossz + (a/10%10*10+a/100)*10+a%10;
    ossz=ossz + (a/10%10*10+a%10)*10+a/100;
    ossz=ossz + (a%10*10+a/100)*10+a/10%10;
    ossz=ossz + (a%10*10+a/10%10)*10+a/100;
    cout << ossz;
    return 0;
}
