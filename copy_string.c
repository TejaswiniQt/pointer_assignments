#include<stdio.h>
void copy_string(char *str1,char *str2);
int main()
{
    char str1[20],str2[20];
    printf("Enter string1: ");
    scanf("%[^\n]%*c",str1);
    copy_string(str1,str2);
    printf("The copied string is %s\n",str2);
    return 0;
}

void copy_string(char *str1,char *str2)
{
    while(*str1)
    {
	*str2 = *str1;
	str1++;
	str2++;
    }
    *str2='\0';
}
