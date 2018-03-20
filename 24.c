#include<stdio.h>
int main()
{
int a[5],i,j,n,num;
printf("enter the values");
scanf("%d",&n);
printf(" enter the array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("sorted array");
for(i=0;i<n;i++)
{
for(j=1;j<n;j++)
{
if(a[i]>a[j])
{
num=a[i];
a[i]=a[j];
a[j]=num;
}}
}
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);

}
return 0;
}
