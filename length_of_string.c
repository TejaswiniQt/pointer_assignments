#include<stdio.h>
int string_length(char *str);
int main()
{
    char str[20];
    printf("Enter string: ");
    scanf("%[^\n]%*c",str);
    int len=string_length(str);
    printf("The length of string is %d\n",len);
    return 0;
}

int string_length(char *str)
{
    int count=0;
    while(*str != '\0')
    {
	count++;
	str++;
    }
    return count;
}
