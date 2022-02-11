#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y;
    printf("Enter first and second number: ");
    scanf("%d%d",&x,&y);
    if(x>y)
    {
        printf("%d is greater than %d",x,y);
    }
    else{
        printf("%d is greater than %d",y,x);
    }
    return 0;
}
