#include <stdio.h>
int main()
{
    int number,index=0;
    printf("enter the number\n");
    scanf("%d",&number);

    do
    {
        printf("%d\n",index+1);
        index=index+1;
    } while (index<number);
    

    return 0;
}
