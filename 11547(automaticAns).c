#include <stdio.h>
#include<math.h>
int main() {
    int t,n,x,y,result;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);

        x = ((((((n*567)/9)+7492)*235)/47)-498);
        y=(x/10)%10;
        result=abs(y);   /// to avoid ( - )

        printf("%d\n",result);

         }
    return 0;
}

