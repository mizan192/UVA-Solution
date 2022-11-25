#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        int n,m;
        cin>>n;
        int a[n],i,j,b[n-1];
        vector<int>v;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(i=0; i<n-1; i++)
        {
            b[i]= abs( a[i+1] - a[i]);

        }
        sort(b, b+n-1);
        bool temp = true;
        for(i=0; i<n-1; i++)
        {
            if(b[i] != i+1)
            {
                temp = false;
            }
        }


        if(temp == false )
        {
            cout<<"Not jolly"<<endl;
        }
        else
        {
            cout<<"Jolly"<<endl;
        }


    }

    return 0;
}

