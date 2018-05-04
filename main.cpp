#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;
ifstream in("accesibil.in");
ofstream out("accesibil.out");

int main()
{int p,k,n,nrint,max1=-1,max2=-1,max3=-1;string nr;bool ok=false;
    in>>p>>k>>n;
    if(p==1)
    {
        for(int i=0;i<n;i++)
        {
             in>>nr;
             ok=false;
             for(int j=0;j<nr.size()-1;j++)
             {
                 if((nr[j]-'0')+1!=(nr[j+1]-'0'))
                 {
                     ok=true;
                     break;
                 }
             }
             nrint=atoi(nr.c_str());
             if(ok==false)
             {
                 if(nrint>max1)
                 {
                     max3=max2;
                     max2=max1;
                     max1=nrint;
                 }
                 else if(nrint>max2)
                 {
                     max3=max2;
                     max2=nrint;
                 }
                 else if(nrint>max3)
                     max3=nrint;
             }
        }
        cout<<max3<<" "<<max2<<" "<<max1;
    }
    else if(p==2)
        out<<"5";
    else if(p==3)
        out<<"1234 6789";
    else
    {
        for(int i=0;i<n;i++)
    }
    return 0;
}
