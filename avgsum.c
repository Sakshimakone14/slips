#include<stdio.h>
#include<stdlib.h>
  int main()
{
   int *p,s=0,n,i;
   float a;
  printf("Enter a limit= ");
    scanf("%d",&n);
  p=(int *)malloc(n*sizeof(int));  
  printf("Numbers= ");
    for(i=0;i<n;i++) 
   {
     scanf("%d",(p+i));
   }    
   for(i=0;i<n;i++)
   {
    s=s+*(p+i);
   }
   a=(float)s/n;
   printf("sum= %d",s); 
   printf("average= %f",a);
}  
