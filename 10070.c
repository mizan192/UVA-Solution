#include<stdio.h>
int main()
{
    int y;
    while( scanf("%d",&y)!=EOF ){
            if ( y >= 2000  ) {



    if( (y % 4 == 0 && y % 100 != 0) || y % 400 == 0 ){


        if( y % 15 == 0 )
        {
            printf("This is leap year.\n");
            printf("This is huluculu festival year.\n");
        }
        else
            printf("This is leap year.\n");
    }

    else if( y % 15 == 0 )
    {
        printf("This is huluculu festival year.\n");
    }
    else
        printf("This is an ordinary year.\n");
            }
    }


return 0;
}
