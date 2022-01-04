#include<stdio.h>
int main()
{
    int a[50],b[50],n,i;
    int *ptr1,*ptr2;
    ptr1=a;
    ptr2=b;
    
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
	scanf("%d",&*(ptr1+i));
    }

    for(i=0;i<n;i++)
    {
	*(ptr2+i) = *(ptr1+i);
    }

    printf("After copying array elements: ");
    for(i=0;i<n;i++)
    {
	printf("%d ",*(ptr2+i));
    }
    printf("\n");
    return 0;
}
