#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,k;
    cin>>test;
    for(k=1; k<=test; k++)
    {
        int n,i,j;
        cin>>n;
        string s;
        cin>>s;

        int b=0,t=0,w=0,a=0;
        for(i=0; i<n; i++)
        {
            if(s[i] == 'B')
                b++;
            if(s[i] == 'W')
                w++;
            if(s[i] == 'T')
                t++;
            if(s[i] == 'A')
                a++;

        }

        if( b==n || (b+a)==n && n!= a  )
            printf("Case %d: BANGLAWASH\n",k);
        else if( w==n || (w+a)==n && a!=n )
            printf("Case %d: WHITEWASH\n",k);
        else if(a==n)
            printf("Case %d: ABANDONED\n",k);
        else if( b==w && a!= n )
            printf("Case %d: DRAW %d %d\n",k,b,t);
        else if(w > b)
            printf("Case %d: WWW %d - %d\n",k,w,b);
        else if(b >w )
            printf("Case %d: BANGLADESH %d - %d\n",k,b,w);



    }


    return 0;
}



