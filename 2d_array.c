#include<stdio.h>
int main()
{
    int a[3][3];
    int *ptr=&a[0][0];
    int i,j;
    printf("Enter the elements of the array: ");
    for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
	    scanf("%d",((ptr+i)+j));
    }
    printf("Entered elements of array:\n");
    for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
	{
	    printf("%d ",(*(ptr+i)+j));
	}
	printf("\n");
    }
    return 0;
}
