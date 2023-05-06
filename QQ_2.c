#include<stdio.h>
int main()
{
    char name[6],c;
    int i = 0,freq =0;
    printf("Enter a string of 5 characters\n");
    fgets(name,6,stdin);
    printf("Enter the character whose frequency is to be found\n");
    scanf(" %c",&c);
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i] == c)
        {freq++;}
    }
    printf("The frequency of given character %c in string %s is %d",c,name,freq);
    return 0;
}