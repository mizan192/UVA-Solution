///In the name of Almighty Allah(swt)

#include<bits/stdc++.h>
#define ll long long int
#define lop(i,n) for(i=0;i<n;i++)

using namespace std;
int main()
{
    ll n,t=0,s;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        else
        {

            s = ceil((3+sqrt(9+8*n))/2);
            printf("Case %lld: %lld\n",++t,s);
        }
    }

    return 0;
}
