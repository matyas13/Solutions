#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("nrcurat.in");
ofstream fout("nrcurat.out");

int rev(int x)
{
    int rx=0;
    while(x>0){
        rx=rx*10+x%10;
        x/=10;
    }
    return rx;
}

int f(int x)
{
    int p=0;
    while(x>0){
        p=p*10+9;
        x/=10;
    }
    return p;
}

bool curat(int x)
{
    return (f(x)-x==rev(x));
}

int main()
{
    int x;
    while(fin>>x){
        if(curat(x))
            fout << 1 << ' ';
        else
            fout << 0 << ' ';
    }
    fin.close();
    fout.close();
    return 0;
}
