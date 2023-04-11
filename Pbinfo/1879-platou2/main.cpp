#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("platou2.in");
ofstream fout("platou2.out");

int main()
{
    int n,maxlen=0,actlen=1,x,y;
    fin >> n >> x;
    for(int i=1;i<n;i++){
        fin >> y;
        if(y>x)
            actlen++;
        else{
            if(actlen>maxlen)
                maxlen=actlen;
            actlen=1;
        }
        x=y;
    }
    if(actlen>maxlen)
        maxlen=actlen;
    fout << maxlen;
    fin.close();
    fout.close();
    return 0;
}
