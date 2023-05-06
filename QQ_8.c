#include<stdio.h>
#include<string.h>
int main()
{
    char a[6],x;
    int i=0,j=0;
    printf("Enter a string of 5 characters\n");
    fgets(a,6,stdin);
    int n = strlen(a);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            if(a[i]>a[j])
            {
                x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
        }
    }
    printf("The sorted array is %s",a);
    return 0;
}