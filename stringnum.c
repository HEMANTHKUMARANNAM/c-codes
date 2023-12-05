#include<stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("hello.txt" , "r");
    char a[10];
    fscanf(ptr,"%s" , a);
    while( a != EOF )
    {
        printf("%s" , a);
        fscanf(ptr,"%s" , a);
    }
}