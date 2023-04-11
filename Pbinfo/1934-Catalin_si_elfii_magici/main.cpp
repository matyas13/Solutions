#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("elfii.in");
    ofstream fout("elfii.out");
    int a,b,c,db=0,x,maxi=-1;
    fin >> a >> b >> c;
    if((a==0 && b==0 && c==0) || (a%2!=0 && b%2!=0 && c%2!=0))
        fout << "Poate data viitoare!";
    else
    {
        x=a*100+b*10+c;
        if(x%2==0 && x>99 && x<=999)
        {
            if(x>maxi)
                maxi=x;
            db++;
        }
        x=a*100+c*10+b;
        if(x%2==0 && x>99 && x<=999)
        {
            if(x>maxi)
                maxi=x;
            db++;
        }
        x=b*100+a*10+c;
        if(x%2==0 && x>99 && x<=999)
        {
            if(x>maxi)
                maxi=x;
            db++;
        }
        x=b*100+c*10+a;
        if(x%2==0 && x>99 && x<=999)
        {
            if(x>maxi)
                maxi=x;
            db++;
        }
        x=c*100+b*10+a;
        if(x%2==0 && x>99 && x<=999)
        {
            if(x>maxi)
                maxi=x;
            db++;
        }
        x=c*100+a*10+b;
        if(x%2==0 && x>99 && x<=999)
        {
            if(x>maxi)
                maxi=x;
            db++;
        }

        if(db==0)
            fout << "Poate data viitoare!";
        else
            fout << db << endl << maxi;
    }
    return 0;
}
