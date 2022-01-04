#include<stdio.h>
#include<stdlib.h>
void search(int *a,int n);
int main()
{
    int *a,i,n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    a=(int *)malloc(sizeof(int)*n);

    printf("Enter the elements of array: ");
    for(i=0;i<n;i++)
    {
	scanf("%d",(a+i));
    }
   search(a,n);
    return 0;
}

void search(int *a,int n)
{
    int data,i;
    printf("Enter the element to be searched: ");
    scanf("%d",&data);
    for(i=0;i<n;i++)
    {
	if(*(a+i) == data)
	    printf("Element %d is found at inddex %d:\n",*(a+i),i);
    }
    printf("Element not found\n");
}
