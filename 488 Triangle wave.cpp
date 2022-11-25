#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n;
    for(t=1; t<=n; t++)
    {
        int am,fr;
        cin>>am;
        cin>>fr;
        int i,j,k;
        for(k=1; k<=fr; k++)
        {
            for(i=1; i<=am; i++ )
            {
                for(j=1; j<=i; j++)
                    cout<<i;
                cout<<endl;
            }
            for(i=am-1; i>=1; i--)
            {
                for(j=1; j<=i; j++)
                    cout<<i;
                cout<<endl;
            }

            if(t != n || k!= fr)
                cout<<endl;
        }

    }
    return 0;
}

