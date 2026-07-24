#include<stdio.h>
int main(){
    int m1[10][10],m2[10][10],m3[10][10];
    int a,b,c,d,i,j,k,temp;

    printf("\n enter the order or rows and columns of 1st matrix:");
    scanf("%d%d",&a,&b);
    printf("\n enter the order or rows and columns of 2nd matrix:");
    scanf("%d%d",&c,&d);
    
    if(a==c && b==d)
    {
        printf("\n enter the elements of 1st matrix:\n");
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
                scanf("%d",&m1[i][j]);
        }
        printf("\n enter the elements of 2nd matrix:\n");
        for(i=0;i<c;i++)
        {
            for(j=0;j<d;j++)
                scanf("%d",&m2[i][j]);
        }
        for(i=0;i<c;i++)
        {
            for(j=0;j<d;j++)
                m3[i][j]=m1[i][j]+m2[i][j];
        }
        printf("\n the resultant matrix is:\n");
        for(i=0;i<c;i++)
        {
            for(j=0;j<d;j++)
                printf("%d\t",m3[i][j]);
            printf("\n");
        }
    }
    else
        printf("matrices cannot be added");

   if(b==c)
    {
        printf("\n enter the elements of 1st matrix:\n");
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
                scanf("%d",&m1[i][j]);
        }
        printf("\n enter the elements of 2nd matrix:\n");
        for(i=0;i<c;i++)
        {
            for(j=0;j<d;j++)
                scanf("%d",&m2[i][j]);
        }

        //multiplication
        for(i=0;i<a;i++)
        {
            for(j=0;j<d;j++)
            {   temp=0;
                for(k=0;k<b;k++)
                    temp=temp+m1[i][k]*m2[k][j];

                m3[i][j]=temp;

            }

        }
        printf("\n the resultant matrix is:\n");
        for(i=0;i<a;i++)
        {
            for(j=0;j<d;j++)
                printf("%d\t",m3[i][j]);
            printf("\n");
        }
    }
    else
        printf("matrices cannot be multiplied");


    return 0;
}