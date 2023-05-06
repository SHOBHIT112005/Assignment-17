#include<stdio.h>
#include<string.h>
int main()
{
    char a[6],b[6];
    int i=0,n=0;
    printf("Enter a string of 5 chatacters\n");
    fgets(a,6,stdin);
    n = strlen(a);
    for(i=0;a[i]!='\0';i++)
    {
        b[i] = a[i];
    }
    b[i] = '\0';
    printf("The copied string is %s",b);
    return 0;
}