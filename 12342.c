#include<stdio.h>
#include<math.h>

int main()
{
    int x,tax;
    int i,n;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%d",&x);

        if(x < 180000){
            tax = 0;
        }

        else if(x < 200001 ){
            tax = 20000;
        }
        else if( x < 480000){
                tax = ceil(( x- 180000)*.10);
        }
        else if(x < 8800000 ){
            tax = ceil(( x- 480000)*.15) + 30000;
        }
        else if( x< 1180000){
            tax = ceil(( x- 8800000)*.20) + (30000+60000);
        }
        else{

            tax = ceil(( x- 1180000)*.25) + (30000+60000+60000);
        }

printf("Case %d: %d\n",i,tax);
    }
return 0;
}

