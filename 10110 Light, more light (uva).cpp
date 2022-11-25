///In the name of Almighty Allah(swt)

#include<bits/stdc++.h>
#define ll long long int
#define lop(i,n) for(i=0;i<n;i++)
#define pb push_back
void fast();
using namespace std;
int main()
{
    fast();

    ll n;

    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        else
        {
            ll x = sqrt(n);
            ll ans = x*x;
            if(ans == n)
                cout<<"yes"<<endl;
            else
                cout<<"no"<<endl;
        }
    }






}


void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}



