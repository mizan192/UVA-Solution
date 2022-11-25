///In the name of Almighty Allah(swt)

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lop(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
void fast();
int getDivisor(ll x);
int main()
{
    fast();
    ll test,l,u;
    ll i,mx,mxNum;
    cin>>test;
    while(test--)
    {
        cin>>l>>u;
        mx = getDivisor(l);
        mxNum = l;
        for(i = l+1; i<=u; i++)
        {
            ll m = getDivisor(i);
            if(m > mx)
            {
                mx = m;
                mxNum = i;
            }
        }
        cout<<"Between "<<l<<" and "<<u<<", "<<mxNum<<" has a maximum of "<<mx<<" divisors."<<endl;

    }


    return 0;
}

int getDivisor(ll x)
{
    ll n,cunt=0;
    for(ll j=1; j*j<=x; j++)
    {
        if(x % j == 0)
            cunt = cunt+2;
        n = j;
        if((n*n) == x)
            cunt--;
    }
    return cunt;
}

void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

