/// Factorial of number

#include<stdio.h>
int main(){
    int n;

    while(scanf("%d",&n)==1){
        if((n>=0 && n<=7) || (n<0 && n%2==0)) printf("Underflow!\n");

        else if( n>=8 && n <= 13 ){
                int i, fact=1;
            for(i=1;i<=n;i++){
            fact=fact*i;
    }
    printf("%d\n",fact);
        }

        else printf("Overflow!\n");
    }

    return 0;
}


