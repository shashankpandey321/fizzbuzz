#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[50];
    int i,j;
    printf("\nenter string");
    gets(a);
    j=0;
    for(i=strlen(a)-1;i>=0;i--)
    {
        b[j]=a[i];
        j++;
    }
    b[j]='\0';
    printf("\nreverse of the string-%s",b);
}