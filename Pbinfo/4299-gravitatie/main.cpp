#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("gravitatie.in");
ofstream fout("gravitatie.out");

void osszefesul(long long a[], int eleje, int kozep, int vege)
{
    long long b[100000];
    int i = eleje, j = kozep+1 ,k = 0;
    while (i <= kozep && j <= vege)
        if (a[i] <= a[j])
            b[k++] = a[i++];
        else
            if (a[j] < a[i])
                b[k++] = a[j++];

    for (; i <= kozep; i++)
        b[k++] = a[i];
    for (; j <= vege; j++)
        b[k++] = a[j];
    for (i = 0; i < k; i++)
        a[eleje++] = b[i];
}

void merge_sort(long long a[], int eleje, int vege)
{
    if (eleje < vege)
    {
        int kozep = (eleje + vege) / 2;
        merge_sort(a, eleje, kozep);
        merge_sort(a, kozep + 1, vege);
        osszefesul(a, eleje, kozep, vege);
    }
}

int main()
{
    long long a[100000];
    int n,ans=0;
    fin >> n;
    for(int i=0;i<n;i++)
        fin >> a[i];
    merge_sort(a,0,n-1);
    for(int i=1;i<n;i++)
        if(a[i]!=a[i-1])
            ans++;
    fout << ans+1;
    fin.close();
    fout.close();
    return 0;
}
