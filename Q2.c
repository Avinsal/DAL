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
    for(int i=0;i<20;i++)
    {
        for(int j=1;j<20;j++)
        {   
            if(pn[i]==pm[j])
            {           
                com[i]=pn[i]=pm[j];
                             
            }
        }
    }
    for(int i=0;i<1024;i++)
    {
        printf("%d",com[i]);
    }
    int cn=0;
    for(int i=0;i<1024;i++)
    {
        if(com[i]!=0)
        {
            cn++;
        }
    }
    printf("%d",cn);
    if(cn=0)
    {
        printf("GCD is 1");
    }

    
  
}