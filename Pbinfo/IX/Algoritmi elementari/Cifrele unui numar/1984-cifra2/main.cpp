#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("cifra2.in");
ofstream fout("cifra2.out");

int mini(int n)
{
    int mini=10;
    while(n>0){
        if(n%10<mini)
            mini=n%10;
        n/=10;
    }
    return mini;
}

void elim(int &n,int x)
{
    int p=1,m=0;
    while(n>0){
        if(n%10!=x){
            m=m+p*(n%10);
            p*=10;
        }
        n/=10;
    }
    p=1;
    while(m>0){
        n=n+(m%10-x)*p;
        p*=10;
        m/=10;
    }
    return;
}

int main()
{
    int n,k;
    fin >> n;
    k=mini(n);
    fout << k << endl;
    elim(n,k);
    fout << n << endl;
    while(n>9){
        k=mini(n);
        elim(n,k);
    }
    fout << n;
    fin.close();
    fout.close();
    return 0;
}
