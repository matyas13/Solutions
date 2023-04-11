#include <iostream>

using namespace std;

int main()
{
    int c1,c2;
    cin >> c1 >> c2;
    for(int i=c1;i<=9;i++){
        for(int j=0;j<=8;j+=2){
            for(int k=0;k<=c2;k++){
                cout << 1000*i+101*j+10*k << endl;
            }
        }
    }
    return 0;
}
