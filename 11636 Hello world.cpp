#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    int i=1;
    while(scanf("%d",&n)==1)
    {
        int cunt=0;
        int sum=1;
        if(n<0)
            return 0;
        else
        {
            while(sum < n)
            {
                sum = sum*2;
                cunt++;
            }
            printf("Case %d: %d\n",i,cunt);
        }
        i++;
    }

    return 0;
}


