#include<stdio.h>
void main()
{  
   int a[10],b[10],i,c[10],j,k=0,m,n;
   scanf("%d",&m);
   scanf("%d",&n);
   printf("A:");
   for(i=0;i<m;i++)
      scanf("%d",&a[i]);
   printf("B:");
   for(i=0;i<n;i++)
     scanf("%d",&b[i]);
   for(i=0;i<m;i++)
   {
      for(j=0;j<k;j++)
      {
         if(c[j]==a[i])
            break;
       }
       if(j==k)
       {
          c[k]=a[i];
          k++;
       }
    }
   for(i=0;i<n;i++)
   {
      for(j=0;j<k;j++)
      {
         if(c[j]==b[i])
           break;
      }
     if(j==k)
     {
       c[k]=b[i];
       k++;
     }
   }
   printf("Union is:-\n");
    for(i=0;i<k;i++)
      printf("%d ",c[i]);
}
