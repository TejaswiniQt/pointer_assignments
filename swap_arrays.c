#include<stdio.h>
#include<stdlib.h>
void swap_array(int *a,int *b,int n);
int main()
{
    int *a,*b,n,i;
  
    printf("Enter the size of array: ");
    scanf("%d",&n);
    a=(int *)(malloc(sizeof(int)*n));
    b=(int *)(malloc(sizeof(int)*n));
    printf("Elements of array1: ");
    for(i=0;i<n;i++)
    {
	scanf("%d",(a+i));
    }
    printf("Elements of array2: ");
    for(i=0;i<n;i++)
    {
	scanf("%d",(b+i));
    }
    swap_array(a,b,n);
    return 0;
}

void swap_array(int *a,int *b,int n)
{
    int temp,i;
    for(i=0;i<n;i++)
    {
	temp=*(a+i);
	*(a+i)=*(b+i);
	*(b+i)=temp;
    }
    printf("After swappig\n");
    printf("Array1: \n");
    for(i=0;i<n;i++)
    {
	printf("%d ",*(a+i));
    }
    printf("\n");
    printf("Array2: \n");
    for(i=0;i<n;i++)
    {
	printf("%d ",*(b+i));
    }
    printf("\n");
}


