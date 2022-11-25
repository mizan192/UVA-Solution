#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long int n,i,j,in;
    double sum;
    cin >> n;
    for(i=1; i<=n; i++)
    {
        j=0;
        sum=0;
        cin >> in;
        if(in<=180000)
        {
            printf("Case %lld: %lld\n",i,j);
            continue;
        }
       else  if(in>180000 && in <=480000)
        {
            sum=(in-180000.0)*0.1;

        }
        else if(in > 480000 && in<=880000 )
        {
            sum =((in-480000.0)*0.15)+30000.0;

        }
        else if(in>880000 && in <=1180000)
        {
            sum=((in-880000.0)*0.2)+90000.0;

        }
        else if(in>1180000)
        {
            sum=((in-1180000.0)*0.25)+150000.0;

        }
        if(sum <2000)
        {
            sum= 2000;
        }
        j = (long long int)(sum);

        if(sum>j)
        {
            j=j+1;
        }
       printf("Case %lld: %lld\n",i,j);
    }


}


