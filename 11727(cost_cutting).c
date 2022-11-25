/////Cost Cutting

#include <stdio.h>
int main()
{
    int i,t,f,s,th;
    scanf("%d",&t);

    for(i=1; i<=t; i++){

        scanf("%d %d %d",&f,&s,&th);

        printf("Case %d: ",i);

        if((f>s&&f<th)||(f>th&&f<s))
            printf("%d\n",f);
        else if((s>f&& s<th)||(s>th && s<f))
            printf("%d\n",s);
        else
            printf("%d\n",th);
    }
    return 0;
}


