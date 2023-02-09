#include<stdio.h>
int main()
{
    int t,m,n,rm,rn;
    int flag=0;
    printf("Enter Two Numbers\n");
    scanf("%d\n",&m);
    scanf("%d",&n);
    if(m>n)
    {
        t=n;
    }
    else
    {
        t=m;
    }
    do
    {   
        rm=m%t;
        if(rm==0)
        {
            rn=n%t;
            if(rn==0)
            {
                printf("\nGCD is %d",t);
                flag=1;
            }
            else
            {
                t--;
            }

        }
        else
        {
            t--;
        }
    } while(flag==0);

    return 0;
}