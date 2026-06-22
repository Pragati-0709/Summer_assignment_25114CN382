#include<stdio.h>

int main()
{
    char str[100];
    int len = 0, flag = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[len] != '\0')
    {
        len++;
    }

    if(str[len-1] == '\n')
        len--;

    for(int i=0; i<len/2; i++)
    {
        if(str[i] != str[len-1-i])
        {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Palindrome String");
    else
        printf("Not Palindrome String");

    return 0;
}