#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("relativ.in");
ofstream fout("relativ.out");

int main()
{
    long long sum=0,actsum;
    int n,mini,x,cnt=1;
    fin >> n >> x;
    actsum=mini=x;
    for(int i=1;i<n;i++){
        fin >> x;
        if(x<=mini){
            cnt++;
            mini=x;
            if(actsum+x>sum)
                sum=actsum+x;
            actsum=x;
        }
        else
            actsum+=x;
    }
    fout << cnt << '\n' << sum;
    fin.close();
    fout.close();
    return 0;
}
