#include<stdio.h>
int main()
{
    char name[6],c;
    int i = 0,n,freq[6] ={0},j=0;
    printf("Enter a string of 5 characters\n");
    fgets(name,6,stdin);
    printf("Enter the number of type of characters entered\n");
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        printf("Enter the character whose frequency is to be found\n");
        scanf(" %c",&c);
        for(i=0;name[i]!='\0';i++)
        {
            if(name[i] == c)
            {freq[j]++;}
        }
        printf("The frequency of given character %c in string %s is %d\n",c,name,freq[j]);
    }
    
    return 0;
}