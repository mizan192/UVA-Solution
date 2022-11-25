#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
       long long int i,j,m,s,cunt;
        if(a==0 && b==0)
            break;
        else
        {
            m = b;
            cunt = 0;
            for(j=a; j<=b; j++)
            {
                s = sqrt(j);
                if(j==s*s){
                    cunt++;
                }


            }
            cout<<cunt<<endl;
        }

    }
    return 0;
}

