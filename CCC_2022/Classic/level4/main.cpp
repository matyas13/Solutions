#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("level4_example.in");
ofstream fout("level4_1.out");

int n,px,py,maxlepes,maxcoin;
char a[101][101],lepesek[]={'U','R','D','L'};
int sor[]={-1,0,1,0},osz[]={0,1,0,-1};

void beolvas()
{
    fin >> n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            fin >> a[i][j];
            if(a[i][j]=='C')
                maxcoin++;
        }
    }
    fin >> px >> py;
}

int aktcoin=0;

void megold()
{
    while(aktcoin<maxcoin)
    {
        if(a[px][py+1]!='W' && a[px][py+1]!='G')
        {
            py++;
            cout << 'R';
            if(a[px][py]=='C')
            {
                a[px][py]='-';
                aktcoin++;
            }

        }
        else if(a[px+1][py]!='W' && a[px+1][py]!='G')
        {
            px++;
            cout << 'D';
            if(a[px][py]=='C')
            {
                a[px][py]='-';
                aktcoin++;
            }
        }
        else if(a[px][py-1]!='W' && a[px][py-1]!='G')
        {
            py--;
            cout << 'L';
            if(a[px][py]=='C')
            {
                a[px][py]='-';
                aktcoin++;
            }
        }
        else if(a[px-1][py]!='W' && a[px-1][py]!='G')
        {
            px--;
            cout << 'U';
            if(a[px][py]=='C')
            {
                a[px][py]='-';
                aktcoin++;
            }
        }
    }
}

int main()
{
    beolvas();
    megold();
    return 0;
}
