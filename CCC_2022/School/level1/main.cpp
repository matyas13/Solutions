#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

const int n=500000;

ifstream fin("level1_5.in");
ofstream fout("level1_5.out");

void megold()
{
    char a[n];
    fin.getline(a,n);
    int db=0;
    char *p=strchr(a,'B');
    while(p!=NULL)
    {
        db++;
        p=strchr(p+1,'B');
    }
    fout << db;
}

int main()
{
    megold();
    fin.close();
    fout.close();
    return 0;
}
