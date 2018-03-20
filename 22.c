#include<stdio.h>
void main()
{
    int a[5],n,i,max=0;
    printf("enter the no values");
    scanf("%d",&n);
    printf("enter the array");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[1];
    for(i=0;i<=n;i++)
    {
        if(max<a[i])
    {
        max=a[i];
    }
    }
    printf("%d",max);
}
