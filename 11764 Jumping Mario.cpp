#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k;
    cin>>t;
    for(k=1; k<=t; k++)
    {
        int n,i,j;
        cin>>n;
        int a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int h,l;
        h=0;
        l=0;
        for(i=0; i<n-1; i++)
        {
            if(a[i] < a[i+1] )
                h++;
            if(a[i] > a[i+1])
                l++;


        }

        printf("Case %d: %d %d\n",k,h,l);

    }


    return 0;
}

