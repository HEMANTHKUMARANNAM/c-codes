
include<stdio.h> int main()
{
    int choice, person, class;
    printf("\n WELCOME TO INDIAN RAILWAYS");
    printf("\n ******************************");
    printf("\n Select your train");
    printf("\n 1.CHARMINAR EXPRESS\n"
           "2.VENKATADHRI EXPRESS\n"
           "3.POTHIGAI EXPRESS\n"
           "4.JANASHATHABDHI EXPRESS\n"
           "5.PADMAVATHI EXPRESS\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:

        printf("\n *****************************");
        printf("\n Your selected train is CHARMINAR express (12760)");
        printf("\n FROM HYDERABAD TO CHENNAI");
        printf("\n Arrival time        : 9:15 AM");
        printf("\n Departure time      : 9:18 AM");

        printf("\n WELCOME TO TICKET BOOKING");
        printf("\n ***************************");
        printf("\n select type of ticket");
        printf("\n 1.fair per head(3A)     : 1->rs.2100\n"
               "2.fair per head(2A)    :2->rs.1500\n"
               "3.fair per head(SL)   :3->rs.425\n ");
        scanf("%d", &person);
        if (person == 1 && 2100 > class)
        {
            printf("your ticket is 3A\n");
            printf("\n your selected type of ticket is 3A\n "
                   "3A :rs.2100 booked\n");
            break;
        }
        else if (person == 2 && 1500 > class)
        {
            printf("your ticket is 2A\n");
            printf("\n your selected type of ticket is 2A\n"
                   "2A  :rs.1500 booked\n");
        }
        else if (person == 3 && 425 > class)
        {
            printf("your ticket is SL\n");
            printf("\n your selected type of ticket is SL\n"
                   "SL :rs.425  booked\n");
        }
        break;
    case 2:
        printf("\n Your selected train is VENKATADHRI express (12603)");
        printf("\n FROM HYDERABAD TO MUMBAI");
        printf("\n Arrival time        : 10:15 AM");
        printf("\n Departure time      : 10:20 AM");
        printf("\n WELCOME TO TICKET BOOKING");
        printf("\n ***************************");
        printf("\n select type of ticket");
        printf("\n 1.fair per head(3A)     :1-> rs.1800\n"
               "2.fair per head(2A)    :2->rs.1400\n"
               "3.fair per head(SL)   :3->rs.525\n");
        scanf("%d", &person);
        if (person == 1 && 1800 > class)
        {
            printf("your ticket is 3A\n");
            printf("\n your selected type of ticket is 3A\n "
                   "3A :rs.1800 booked\n");
            break;
        }
        else if (person == 2 && 1400 > class)
        {
            printf("your ticket is 2A\n");
            printf("\n your selected type of ticket is 2A\n"
                   "2A  :rs.1400 booked\n");
        }
        else if (person == 3 && 525 > class)
        {
            printf("your ticket is SL\n");
            printf("\n your selected type of ticket is SL\n"
                   "SL :rs.525  booked\n");
        }
        break;
    case 3:
        printf("\n Your selected train is POTHIGAI express (22623)");
        printf("\n FROM MADURAI TO CHENNAI EGMORE");
        printf("\n Arrival time        : 12:15 AM");
        printf("\n Departure time      : 12:18 AM");
        printf("\n WELCOME TO TICKET BOOKING");
        printf("\n ***************************");
        printf("\n select type of ticket");
        printf("\n 1.fair per head(3A)     : rs.1300\n"
               "2.fair per head(2A)    :rs.1560\n"
               "3.fair per head(SL)   :rs.370\n ");
        scanf("%d", &person);
        if (person == 1 && 1300 > class)
        {
            printf("your ticket is 3A\n");
            printf("\n your selected type of ticket is 3A\n "
                   "3A :rs.1300 booked\n");
            break;
        }
        else if (person == 2 && 1560 > class)
        {
            printf("your ticket is 2A\n");
            printf("\n your selected type of ticket is 2A\n"
                   "2A  :rs.1560 booked\n");
        }
        else if (person == 3 && 370 > class)
        {
            printf("your ticket is SL\n");
            printf("\n your selected type of ticket is SL\n"
                   "SL :rs.370  booked\n");
        }
        break;
    case 4:
        printf("\n Your selected train is JANASHATHABDHI express (12163)");
        printf("\n FROM CHENNAI TO DADAR");
        printf("\n Arrival time        : 9:15 PM");
        printf("\n Departure time      : 9:20 PM");
        printf("\n WELCOME TO TICKET BOOKING");
        printf("\n ***************************");
        printf("\n select type of ticket");
        printf("\n 1.fair per head(3A)     : rs.1340\n"
               "2.fair per head(2A)    :rs.1676\n"
               "3.fair per head(SL)   :rs.390\n ");
        scanf("%d", &person);
        if (person == 1 && 1340 > class)
        {
            printf("your ticket is 3A\n");
            printf("\n your selected type of ticket is 3A\n "
                   "3A :rs.1800 booked\n");
            break;
        }
        else if (person == 2 && 1676 > class)
        {
            printf("your ticket is 2A\n");
            printf("\n your selected type of ticket is 2A\n"
                   "2A  :rs.1400 booked\n");
        }
        else if (person == 3 && 390 > class)
        {
            printf("your ticket is SL\n");
            printf("\n your selected type of ticket is SL\n"
                   "SL :rs.525  booked\n");
        }
        break;
    case 5:
        printf("\n Your selected train is PADHMAVATHI express (12764)");
        printf("\n FROM SECUNDERABAD TO TIRUPATI");
        printf("\n Arrival time        : 15:00 PM");
        printf("\n Departure time      : 15:18 PM");
        printf("\n Fair per head       : rs.550");
        printf("\n WELCOME TO TICKET BOOKING");
        printf("\n ***************************");
        printf("\n select type of ticket");
        printf("\n 1.fair per head(3A)     : rs.1630\n"
               "2.fair per head(2A)    :rs.1470\n"
               "3.fair per head(SL)   :rs.500\n ");
        scanf("%d", &person);
        if (person == 1 && 1630 > class)
        {
            printf("your ticket is 3A\n");
            printf("\n your selected type of ticket is 3A\n "
                   "3A :rs.1630 booked\n");
            break;
        }
        else if (person == 2 && 1470 > class)
        {
            printf("your ticket is 2A\n");
            printf("\n your selected type of ticket is 2A\n"
                   "2A  :rs.1470 booked\n");
        }
        else if (person == 3 && 500 > class)
        {
            printf("your ticket is SL\n");
            printf("\n your selected type of ticket is SL\n"
                   "SL :rs.500  booked\n");
        }
        break;
    default:
        printf("\n INVALID CHOICE");
    }
}
