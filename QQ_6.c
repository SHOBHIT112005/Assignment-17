#include<stdio.h>
int main()
{
    char string[6],a[6];
    int i=0;
    printf("Enter a string with 5 charaacters\n");
    fgets(string,6,stdin);
    for(i=0;string[i]!='\0';i++)
    {
        a[i] = string[i];
    }
    for(i=0;string[i]!='\0';i++)
    {
        string[5-i] = a[i];
    }
    printf("The reversed string is %s",string);
    return 0;   
}