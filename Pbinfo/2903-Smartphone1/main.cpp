#include <iostream>
#include <fstream>

using namespace std;

int a[10][10]= {0,0,0,0,0,0,0,0,0,0,
                0,0,1,0,1,1,0,0,0,0,
                0,1,0,1,1,1,1,0,0,0,
                0,0,1,0,0,1,1,0,0,0,
                0,1,1,0,0,1,0,1,1,0,
                0,1,1,1,1,0,1,1,1,1,
                0,0,1,1,0,1,0,0,1,1,
                0,0,0,0,1,1,0,0,1,0,
                0,0,0,0,1,1,1,1,0,1,
                0,0,0,0,0,1,1,0,1,0};

ifstream fin("smartphone1.in");
ofstream fout("smartphone1.out");

int main()
{
    long long n, x;
    fin >> n;
    bool check;
    int ans=0;
    for(int i=0;i<n;i++){
        fin >> x;
        check=true;
        while(check && x>9){
            if(a[x%10][x/10%10]==0){
                check=false;
            }
            x/=10;
        }
        if(check)
            ans++;
    }
    fout << ans;
    fin.close();
    fout.close();
    return 0;
}
