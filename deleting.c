#include <stdio.h>
int main()
{
   unsigned long int n;
   int t[10],temp,c,i,j,k,s;
   scanf("%lu %d",&n,&k);
   for(i=0,c=1;;i++,c++)
   {
       temp=n%10;
       t[i]=temp;
       n=n/10;
       if(n==0) 
       break;
   }
   for(i=0;i<c;++i)
   {
       for(j=i+1;j<c;++j)
       {
           if(t[i]>t[j])
           {
               s=t[i];
               t[i]=t[j];
               t[j]=s;
           }
       }
   }
   for(i=0;i<c-k;i++)
   {
       printf("%d",t[i]);
   }
   return 0;
}
