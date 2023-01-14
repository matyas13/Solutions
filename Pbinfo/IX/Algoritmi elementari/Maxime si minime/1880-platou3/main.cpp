#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("platou3.in");
ofstream fout("platou3.out");

int main()
{
    int n,maxlen=0,actlen=0,x;
    fin >> n;
    for(int i=0;i<n;i++){
        fin >> x;
        if(x>0)
            actlen++;
        else{
            if(actlen>maxlen)
                maxlen=actlen;
            actlen=0;
        }
    }
    if(actlen>maxlen)
        maxlen=actlen;
    fout << maxlen;
    fin.close();
    fout.close();
    return 0;
}
