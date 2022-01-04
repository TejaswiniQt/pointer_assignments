#include<stdio.h>
#include<stdlib.h>
void reverse_array(int *a,int n);
int main()
{
    int *a,n,i;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    a=(int *)malloc(sizeof(int)*n);

    printf("Enter elements of array: ");
    for(i=0;i<n;i++)
    {
	scanf("%d",(a+i));
    }

    reverse_array(a,n);
    return 0;
}

void reverse_array(int *a,int n)
{
    printf("Reverse array: ");
    for(int i=n-1;i>=0;i--)
    {
	printf("%d ",*(a+i));
    }
    printf("\n");
}

