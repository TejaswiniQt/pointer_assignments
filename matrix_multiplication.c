#include<stdio.h>
int main()
{
    int m,n,i,j;
    printf("Enter order of m and n: ");
    scanf("%d%d",&m,&n);
    int a[m][n],b[m][n],c[m][n];
    printf("Enter elements of matrix1: ");
    for(i=0;i<m;i++)
    {
	for(j=0;j<n;j++)
	scanf("%d",(*(a+i)+j));
    }
    printf("Enter elements of matrix2: ");
    for(i=0;i<m;i++)
    {
	for(j=0;j<n;j++)
	scanf("%d",(*(b+i)+j));
    }

    for(i=0;i<m;i++)
    {
	for(j=0;j<n;j++)
	*(*(c+i)+j) = *(*(a+i)+j) * *(*(b+i)+j);
    }
    printf("Multiplication of two matrices:\n");
    for(i=0;i<m;i++)
    {
	for(j=0;j<n;j++)
	{
	    printf("%d\t",*(*(c+i)+j));
	}
	printf("\n");
    }
    return 0;
}
