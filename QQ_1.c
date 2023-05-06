#include<stdio.h>
int main()
{
    char name[6];
    int i = 0,length =0;
    printf("Enter a string of 5 characters\n");
    fgets(name,6,stdin);
    printf("\n");
    for(i=0;name[i]!='\0';i++)
    {
        length ++;
    }
    printf("The length of string %s is %d",name,length);
    return 0;
}