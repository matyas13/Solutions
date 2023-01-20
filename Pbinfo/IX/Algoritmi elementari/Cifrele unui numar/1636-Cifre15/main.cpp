#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("cifre15.in");
ofstream fout("cifre15.out");

int main()
{
    long long cnt=0,n,x,cnt5=0,cnt2=0,k=1;
    fin >> n;
    for(int i=0;i<n;i++){
        fin >> x;
        while(x%2==0){
            cnt2++;
            x/=2;
        }
        while(x%5==0){
            cnt5++;
            x/=5;
        }
        k=k*(x%10)%10;
    }
    if(cnt5>cnt2){
        for(int i=cnt5-cnt2;i>0;i--)
            k=k*5%10;
    }
    else{
        for(int i=cnt2-cnt5;i>0;i--)
            k=k*2%10;
    }
    fout << min(cnt5,cnt2) << ' ' << k;
    fin.close();
    fout.close();
    return 0;
}
