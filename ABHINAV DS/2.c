#include<stdio.h>
void main()
{
    int a[150],n,i,c ,m  ;
    printf("ENTER NO. OF ELEMENTS ");
    scanf("%d",&n);
    printf("ENTER ELEMENTS  ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter position:");
    scanf("%d",&c);
    printf("enter element to be insert:");
    scanf("%d",&m);
    for(i=n-1;i>=c-1;i--)
    {
        a[i+1]=a[i];
    }
    a[c-1]=m;
    for(i=0;i<n+1;i++)
    {
        printf("%d ",a[i]);
    }
}

