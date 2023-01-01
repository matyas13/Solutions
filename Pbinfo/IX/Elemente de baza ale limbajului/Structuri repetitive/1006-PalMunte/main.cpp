#include <iostream>

using namespace std;

int main()
{
    for(int i=1;i<=5;i++)
        for(int j=i+1;j<=6;j++)
            for(int k=j+1;k<=7;k++)
                for(int l=k+1;l<=8;l++)
                    for(int m=l+1;m<=9;m++)
                        cout << 100000001*i+10000010*j+1000100*k+101000*l+10000*m << endl;
    return 0;
}
