#include <iostream>

using namespace std;

int main()
{
    int s1=0,s2=0,s3=0,p=1,cnt=0,s4,n,c;
    cin >> n;
    s4=n%10;
    do
    {
        c=n%10;
        s1+=c*c;
        if(c%2==1)
            s2+=c;
        if(c%3==0)
            s3+=c;
        if(c>5)
            cnt++;
        if(c!=0)
            p*=c;
        n/=10;
    }while(n!=0);
    cout << s1 << ' ' << s2 << ' ' << s3 << ' ' << cnt << ' ' << p << ' ' << s4+c;
    return 0;
}
