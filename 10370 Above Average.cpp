#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=0; k<t; k++)
    {
        int n;
        cin>>n;
        int a[n],sum,i,j;
        sum=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }

        int avg,cnt=0;
        avg=sum/n;
        for(i=0; i<n; i++)
        {
            if(a[i] > avg)
                cnt++;
        }
        float result,an;
        result = (float)cnt/n;
        an = result*100;
        cout<<fixed<<setprecision(3)<<an<<"%"<<endl;

    }


    return 0;
}

