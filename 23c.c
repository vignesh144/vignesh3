#include<stdio.h>
int main()
{
    int a[5],b,i,min=0;
    printf("enter the no values");
    scanf("%d",&b);
    printf("enter the array");
    for(i=1;i<=b;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[1];
    for(i=0;i<=b;i++)
    {
        if(min>a[i])
    {
        min=a[i];
    }
    }
    printf("%d",min);
    return 0;
}
