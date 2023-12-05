#include<stdio.h>
struct userdetails
{
    char name[8];
    double accnum;
    double accpin;
    double accbal;
};

int main()
{
    int usercount = 6;
    struct userdetails person[usercount];

    FILE *userdata;

    userdata = fopen("projectduplicate.txt" , "r");

    for(int i =1 ; i<=4 ;i++)
    {
        char tempchar[30];
        fscanf(userdata, "%s" , tempchar);
    }

    for(int  i =0 ; i < usercount ; i++)
    {
        char name[8];
        fscanf(userdata, "%s" , person[i].name);
        fscanf(userdata, "%lf" , &person[i].accnum);
        fscanf(userdata, "%lf" , &person[i].accpin);
        fscanf(userdata, "%lf" , &person[i].accbal);
    }

    fclose(userdata);




    userdata = fopen("projectduplicate.txt" , "w");

    fprintf(userdata , "%s\t" , "USERNAME");
    fprintf(userdata , "%s\t" , "ACCOUNTNUMBER");
    fprintf(userdata , "%s\t" , "PIN");
    fprintf(userdata , "%s\n" , "CURRENTBALANCE");

    for(int  i =0 ; i < usercount ; i++)
    {
        fprintf(userdata, "%s\t" , person[i].name);
        fprintf(userdata, "%0.lf\t" , person[i].accnum);
        fprintf(userdata, "%0.lf\t" , person[i].accpin);
        fprintf(userdata, "%0.lf\n" , person[i].accbal);
    }

    fclose(userdata);
}