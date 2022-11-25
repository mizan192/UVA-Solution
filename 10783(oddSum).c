#include<stdio.h>
int main()
{
    int a,j,b,t;
scanf("%d",&t);
for(j=0;j<t;j++){
    scanf("%d",&a);
    scanf("%d",&b);

   int i, sum = 0;
    for(i=a;i<=b;i++){
        if(i%2==1){
            sum=sum+i;
        }
    }

    printf("Case %d: %d\n",j+1,sum);

}
return 0;
}

