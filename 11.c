#include<stdio.h>
void main()
{
    int A[30],B[30],C[30],i,j,k=1,m,n,count=0;
    scanf("%d",&m);
    scanf("%d",&n);
    for(i=1;i<=m;i++)
        scanf("%d",&A[i]);
    for(i=1;i<=n;i++)
        scanf("%d",&B[i]);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(A[i]==B[j])
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
                if(A[i]==C[k-1])
                    break;
                else
                {
                 C[k]=A[i];
                 k++;
                }
        }
        count=0;
    }
    printf("Difference is ");
    for(i=1;i<k;i++)
        printf("%d ",C[i]);
}
