//Matrix-input() and display()
#include<stdio.h>
void input(int *x,int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		 {
		 	scanf("%d",x);
		 	x++;
		 }
    }
}
int main()
{
	int a[2][2];
	int b[2][2];
	printf("Enter 1st matrix:\n");
	input(a[0],2,2);
	printf("1st matrix:\n");
	display(a[0],2,2);
	printf("Enter 2nd matrix:\n");
	input(b[0],2,2);
	printf("2nd matrix:\n");
	display(b[0],2,2);
	
	return 0;
}