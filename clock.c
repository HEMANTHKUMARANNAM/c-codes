#include <stdio.h>
#include <stdio.h>
#include <time.h>
#include <windows.h>

int delay(int m)
{

    clock_t time = m + clock();
    while (time > clock())
        ;
}

void textcolor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int main()
{
    system("cls");
    int settime;
    printf("ENTER HOW MUCH TIME DO U NEED TO TELL TIME (IN MIN): ");
    scanf("%d", &settime);
    settime = settime*60;
    int temp = settime;
    system("cls");
    for (int i = 0; i < settime; i++)
    {
        time_t tim;
        time(&tim);
        textcolor(4);printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t%s", ctime(&tim));
        printf("\n\n\t\t\t\t\t\t\tTIME REMAINING:%d" ,temp);
        printf("\n\n\n\n\n\n\n\n\n");
        temp = temp-1;
        delay(1000);
        system("cls");
        textcolor(768);
    }
}