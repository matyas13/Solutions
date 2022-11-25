#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

struct elem
{
    char betu;
    int nr;
};

int n;

ifstream fin("level2_5.in");
ofstream fout("level2_5.out");

int keres(elem sz[],char x,int sind)
{
     for(int i=0;i<=sind;i++)
        if(sz[i].betu==x)
            return i;
     return -1;
}

void megold()
{
    char a[10000][20];
    elem sz[260];
    int sind=0;
    fin>>n;
    fin.get();
    fin>>a[0];
    sz[sind].betu=a[0][0];
    sz[sind].nr=1;
    for(int i=1;i<n;i++)
    {
        fin>>a[i];
        if(sz[sind].betu!=a[i][0])
        {
            sind++;
            sz[sind].betu=a[i][0];
            sz[sind].nr=1;
        }
        else
        {
            sz[sind].nr++;
        }
    }
    for(int i=0;i<n;i++)
    {
        int hossz=strlen(a[i]);
        for(int j=1;j<hossz;j++)
        {
            int poz=keres(sz,a[i][j],sind);
            if(poz==-1)
            {
                sind++;
                sz[sind].betu=a[i][j];
                sz[sind].nr=1;
            }
            else
                sz[poz].nr++;
        }
    }
    sind++;
    for(int i=0;i<sind;i++)
        fout << sz[i].nr <<endl;
}

int main()
{
    megold();
    fin.close();
    fout.close();
    return 0;
}
