#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char a[255],b[255]="";
    cin >> a;
    strcpy(b,a);
    for(int k=strlen(a)-1;k>=0;k--)
        b[k]=tolower(b[k]);
    int j=0,i=0,n=strlen(a);
    while(j<n){
        if(b[j]==b[j+1]){
            i=j;
            while(j<n && b[j]==b[j+1])
                j++;
            int x=j-i+1;
            for(int k=x;k>0;k--){
                for(int m=i;m<n;m++){
                    a[m]=a[m+1];
                    b[m]=b[m+1];
                }
            }
            n=n-(j-i+1);
            i=0;
            j=0;
        }
        else
            j++;
    }
    if(a[0]=='\0'){
        a[0]=' ';
        a[1]='\0';
    }
    cout << a;
    return 0;
}
