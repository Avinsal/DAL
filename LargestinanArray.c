#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a;
    int n,l=0;
    int op=0;
    printf("Enter Size of Array\n");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("Enter %d Elements\n",n);
    for(int i=0;n>i;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;n>i;i++)
    {
        op++;
        if(a[i]>l)
        {
            l=a[i];
        }
    }
    printf("Largest Number is %d",l);
}
