#include<stdio.h>
int main()
{
  int m,n,p,q;
  printf("Enter order of 1st matrix: ");
  scanf("%d %d",&m,&n);
  printf("Enter order of 2nd matrix: ");
  scanf("%d %d",&p,&q);
  int A[m][n],B[p][q];
  int C[m][n];
  if(m!=n || p!=q)
  {
    printf("Addition not possible");
    return 0;
  }
  int i,j;
   printf("Enter elements of first matrix: ");
   for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        scanf("%d",&A[i][j]);
      }
    }
  
   printf("Enter elements of second matrix: ");
   for(i=0;i<p;i++)
    {
      for(j=0;j<q;j++)
      {
        scanf("%d",&B[i][j]);
      }
    } 
   
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      C[i][j]=A[i][j]+B[i][j];
    }
  }
printf( "Elements of new matrix:\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d ",C[i][j]);
    }
    printf("\n");
  }
  return 0;
}
