#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;

    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        d=a*a;
        e=b*b;
        f=c*c;

        if(a!=0 && b!=0 && c!=0){

            if(d==e+f || e==d+f || f==e+d)
                printf("right\n");
            else
                printf("wrong\n");
        }
    }
    return 0;
}
