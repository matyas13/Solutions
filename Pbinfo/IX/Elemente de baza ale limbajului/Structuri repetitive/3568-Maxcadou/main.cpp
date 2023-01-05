#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("maxcadou.in");
ofstream fout("maxcadou.out");

int main()
{
    long long n;
    int freq[10]={0};
    fin >> n;
    while(n>0)
    {
        freq[n%10]++;
        n/=10;
    }
    for(int i=9;i>=0;i--)
    {
        if(freq[i]!=0)
        {
            for(int j=freq[i];j>0;j--)
                fout << i;
        }
    }
    fin.close();
    fout.close();
    return 0;
}
