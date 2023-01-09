#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("hidden_number.in");
ofstream fout("hidden_number.out");

int main()
{
    int n=0,x;
    long long sum=0;
    while(fin>>x){
        n++;
        sum+=x;
    }
    if(sum%n==0)
        fout << sum/n;
    else
        fout << -1;
    fin.close();
    fout.close();
    return 0;
}
