#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,i,j,sum,m;

    cout<<"PERFECTION OUTPUT"<<endl;

    while( cin>>n)
    {

        if(n == 0)
        {
            cout<<"END OF OUTPUT"<<endl;
            break;
        }

        else
        {
            sum =0;
            m= n/2;

            for(j=1; j<=m; j++)
            {
                if( n % j ==0   )
                {
                    sum = sum+ j;
                }

            }
            if(sum > n )
                printf("%5d  ABUNDANT\n",n);
            else if(sum < n)
                printf("%5d  DEFICIENT\n",n);
            else
                printf("%5d  PERFECT\n",n);
        }

    }


    return 0;
}

