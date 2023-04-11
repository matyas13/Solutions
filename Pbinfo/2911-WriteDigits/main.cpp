#include <iostream>

using namespace std;

int m;

void egy()
{
    cout << "  @\n";
    cout << " @@\n";
    cout << "  @\n";
    cout << "  @\n";
    cout << "@@@@@\n\n";
}

void ket()
{
    cout << "@@@@\n";
    cout << "@  @\n";
    cout << "  @\n";
    cout << " @\n";
    cout << "@@@@\n\n";
}

void har()
{
    cout << "@@@@@\n";
    cout << "    @\n";
    cout << "@@@@@\n";
    cout << "    @\n";
    cout << "@@@@@\n\n";
}

void negy()
{
    cout << "@   @\n";
    cout << "@   @\n";
    cout << "@@@@@\n";
    cout << "    @\n";
    cout << "    @\n\n";
}

void ot()
{
    cout << "@@@@@\n";
    cout << "@    \n";
    cout << "@@@@@\n";
    cout << "    @\n";
    cout << "@@@@@\n\n";
}

void hat()
{
    cout << "@@@@@\n";
    cout << "@    \n";
    cout << "@@@@@\n";
    cout << "@   @\n";
    cout << "@@@@@\n\n";
}

void het()
{
    cout << "@@@@ \n";
    cout << "   @ \n";
    cout << "  @@@\n";
    cout << "   @\n";
    cout << "   @\n\n";
}

void nyolc()
{
    cout << "@@@@@\n";
    cout << "@   @\n";
    cout << "@@@@@\n";
    cout << "@   @\n";
    cout << "@@@@@\n\n";
}

void kil()
{
    cout << "@@@@@\n";
    cout << "@   @\n";
    cout << "@@@@@\n";
    cout << "    @\n";
    cout << "    @\n\n";
}

void nul()
{
    cout << "@@@@@\n";
    cout << "@   @\n";
    cout << "@   @\n";
    cout << "@   @\n";
    cout << "@@@@@\n\n";
}

void kiir(long long n)
{
    if(n>9)
    {
        kiir(n/10);
        if(n%10==0)
            nul();
        if(n%10==1)
            egy();
        if(n%10==2)
            ket();
        if(n%10==3)
            har();
        if(n%10==4)
            negy();
        if(n%10==5)
            ot();
        if(n%10==6)
            hat();
        if(n%10==7)
            het();
        if(n%10==8)
            nyolc();
        if(n%10==9)
            kil();
    }
    else
    {
        if(n==0)
            nul();
        if(n==1)
            egy();
        if(n==2)
            ket();
        if(n==3)
            har();
        if(n==4)
            negy();
        if(n==5)
            ot();
        if(n==6)
            hat();
        if(n==7)
            het();
        if(n==8)
            nyolc();
        if(n==9)
            kil();
    }
}

int main()
{
    long long n;
    cin >> n;
    kiir(n);
    return 0;
}
