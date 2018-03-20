#include<stdio.h>
int main()
{
    int a[5],b,i,max=0;
    printf("enter the no values");
    scanf("%d",&b);
    printf("enter the array");
    for(i=1;i<=b;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[1];
    for(i=0;i<=b;i++)
    {
        if(max>a[i])
    {
        max=a[i];
    }
    }
    printf("%d",max);
    return 0;
}
