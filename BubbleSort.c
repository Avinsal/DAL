#include<stdio.h>
#include<stdlib.h>
int *bubblesort(int *a,int n)
{
    int i,j;
    int temp;
    int op=0;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                op++;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("OpCount=%d\n",op);
    return a;
}
int main()
{
    int *a;
    int n;
    printf("Enter Size of Array\n");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("Enter %d Elements\n",n);
    for(int i=0;n>i;i++)
    {
        scanf("%d",&a[i]);
    }
    a=bubblesort(a,n);
    printf("Sorted array:\n");
    for(int i=0;n>i;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;

}