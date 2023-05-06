#include<stdio.h>
int main()
{
    char a[10];
    int i=0,vovel=0;
    printf("Enter a string\n");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i] == 'a')||(a[i] =='e')||(a[i] =='i')||(a[i] =='o')||(a[i] =='u'))
        vovel++;
    }
    printf("The number of vovels in %s are %d",a,vovel);
    return 0;
}