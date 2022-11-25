/// Relational Operator

#include<stdio.h>
int main()
{
    int i,t,a,b;

    printf("Enter how many time to check?\n");
    scanf("%d",&t);

    for(i=1;i<=t;i++){

        printf("Enter two integer value :\n");
        scanf("%d %d",&a,&b);

        if(a>b)
            printf(">\n");
        else if(a<b)
            printf("<\n");
        else
            printf("=\n");
    }

    return 0;
}
