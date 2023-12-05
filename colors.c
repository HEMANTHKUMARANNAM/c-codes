#include <stdio.h>
#include <windows.h>

void textcolor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}

int main()
{
    for (int i = 0; i < 1000; i++)
    {
        textcolor(i);
        printf("color , %d\n" ,i);
    }
    textcolor(7);
    return 0;
}