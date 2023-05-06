#include<stdio.h>
int main()
{
    char string[6];
    int i=0;
    printf("Enter a string with 5 characters\n");
    fgets(string,6,stdin);
    for(i=0;string[i]!='\0';i++)
    {
        if((string[i] >='A') && (string[i] <= 'Z'))
        {string[i] = string[i] + 32;}
        
    }
    printf("The modified string is %s",string);
    return 0;   
}