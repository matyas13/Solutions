#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    char voc[]="aeiouAEIOU",a[11];
    cin >> a;
    int i=0,n=strlen(a);
    while(i<n && strchr(voc,a[i])==NULL){
        i++;
    }
    if(i==strlen(a)){
        cout << "IMPOSIBIL";
        return 0;
    }

    int j=n-1;
    while(j>=0 && strchr(voc,a[j])!=NULL)
        j--;
    if(j==-1){
        cout << "IMPOSIBIL";
        return 0;
    }
    swap(a[i],a[j]);
    cout << a;
    return 0;
}
