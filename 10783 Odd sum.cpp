#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k;
    cin>>t;
    for(k=1; k<=t; k++)
    {
        int a,b;
        cin>>a;
        cin>>b;
        int i,j,sum=0;
        for(i=a; i<=b; i++)
        {
            if(i %2 ==1)
                sum += i;
        }
        printf("Case %d: %d\n",k,sum);
    }


    return 0;
}

