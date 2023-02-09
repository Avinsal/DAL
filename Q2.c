#include<stdio.h>
#include<stdlib.h>
int *Primefactorm(int x)  
{ 
    int* pm=(int*)malloc(1024*sizeof(int));
    int c,z=0;  
    int i=0;
    for(c= 2;x>1;c++)  
    {  
        while(x%c==0)
        {  
            pm[z]=c;
            z++;
            x=x/c;
        }
        
    }
    for(int i=0;i<z;i++)
    {
        printf("%d\n",pm[i]);
    }
    return pm;
} 
int *Primefactorn(int x)  
{ 
    int* pn=(int*)malloc(1024*sizeof(int));
    int c,z=0;  
    int i=0;
    for(c= 2;x>1;c++)  
    {  
        while(x%c==0)
        {  
            pn[z]=c;
            z++;
            x=x/c;
        }
        
    }
    for(int i=0;i<z;i++)
    {
        printf("%d\n",pn[i]);
    }
    return pn;
    
} 

int main()
{
    int m,n;
    int *pn,*pm;
    printf("Enter Two positive integer\n");  
    scanf("%d",&m);  
    scanf("%d",&n);  
    pm=Primefactorm(m);
    pn=Primefactorn(n);
    int* com=(int*)malloc(1024*sizeof(int));
    int z=0;
    for(int i=0;i<10;i++)
    {
        for(int j=1;j<10;j++)
        {   
            if(pm[i]==pn[j])
            {           
                  z++;
                  com[i]=pm[i]=pn[j];
                  i++;
            }
        }
    }
    for(int i=0;i<z;i++)
    {
        printf("%d",com[i]);
    }
    int cn=0;
    for(int i=0;i<z;i++)
    {
        if(com[i]!=0)
        {
            cn++;
        }
    }
    printf("\ncn=%d",cn);
    if(cn==0)
    {
        printf("GCD is 1");
    }
    int gcd=1;
    for(int i=0;i<z;i++)
    {
        if(com[i]!=0)
        {
            gcd=gcd*com[i];
        }
    }
    printf("\nGCD is %d",gcd);
    return 0;

    
  
    
}
