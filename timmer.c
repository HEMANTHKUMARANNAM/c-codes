#include<stdio.h>
#include<stdio.h>
#include<time.h>
#include<windows.h>

void textcolor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int mainmenu()
{
    system("cls");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
    printf("\t\t\t\t\t..............................................\n");
    printf("\t\t\t\t\t\t   WELCOME TO  SBI BANK\n");
    printf("\t\t\t\t\t..............................................\n");
    printf("\n");
    printf("\n");
}

int delay(int m)
{
    
    clock_t time = m + clock();
    while(time > clock());
    
}

int timmer(int s)
{
    while(s >= 0)
    {
        mainmenu();
        textcolor(4);printf("\n\n\t\t\t\t\t\tNEXT TRANSACTION AVAILABLE IN\n\n\n\t\t\t\t\t\t\t");
        printf("00 : 0%d" , s);
        delay(1000);
        s--;
    }
}

int main()
{
    timmer(7);
}

