#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdboolk.h>
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int delay(int m)
{
    clock_t time = m + clock();
    while (time > clock());
}
int main()
{
    int N = 8;
    while (N >0)
    {
        system("cls");gotoxy(100, 30);
        printf("HELLO");delay(5000);gotoxy(10, 10);
        system("cls");printf("hemanth");printf("HELLO");delay(5000);N--;
    }
    system("cls");

}