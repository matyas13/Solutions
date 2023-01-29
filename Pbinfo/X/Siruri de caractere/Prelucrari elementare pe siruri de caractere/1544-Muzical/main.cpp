#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("muzical.in");
ofstream fout("muzical.out");

string note[8]={"do1","re","mi","fa","sol","la","si","do2"};

int main()
{
    int sum=0,n;
    string s;
    fin >> n;
    for(int i=0;i<n;i++){
        fin >> s;
        if(s=="re")
            sum++;
        if(s=="mi")
            sum+=2;
        if(s=="fa")
            sum+=3;
        if(s=="sol")
            sum+=4;
        if(s=="la")
            sum+=5;
        if(s=="si")
            sum+=6;
        if(s=="do2")
            sum+=7;
    }
    fout << note[sum%8];
    fin.close();
    fout.close();
    return 0;
}
