#include<stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("hello.txt" , "r");
    int a;
    fscanf(ptr,"%d" , &a);
    while( a != NULL )
    {
        printf("%d" , a);
        fscanf(ptr,"%d" , &a);
    }
    fclose(ptr);
}