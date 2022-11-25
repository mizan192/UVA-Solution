/// text Quotes


#include<stdio.h>
int main( )
{
    char ch[1000000];
    int i,count=0;
    while(gets(ch))
    {
        for(i=0; ch[i]; i++){
            if(ch[i] == '"'){
                count++;
                if(count%2 == 0){
                    printf("''");
                }
                else
                    printf("``");
            }
            else{
                printf("%c",ch[i]);
            }
        }
        printf("\n");
    }

    return 0;
}

