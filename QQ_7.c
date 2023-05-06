#include<stdio.h>
int main()
{
    char string[6];
    int i=0,alphabet=0,digit=0,special=0;
    printf("Enter a string with 5 characters\n");
    fgets(string,6,stdin);
    for(i=0;string[i]!='\0';i++)
    {
        if(((string[i] >='a') && (string[i] <= 'z'))||((string[i] >= 'A')&&(string[i] <='Z')))
        alphabet++;
        else if((string[i] >= '0')&&(string[i] <= '9'))
        digit++;
        else if(((string[i]>=32)&&(string[i]<=47)&& string[i] != 32 && string[i] != 44 && string[i] != 46 && string[i] != 95) ||
        ((string[i]>=58)&&(string[i]<=64)) ||
        ((string[i]>=91)&&(string[i]<=96)) ||
        ((string[i]>=123)&&(string[i]<=126)))
        special++;
    }
    printf("The number of alphabets are %d\n",alphabet);
    printf("The number of digits are %d\n",digit);
    printf("The number of special characters are %d\n",special);
    return 0;   
}