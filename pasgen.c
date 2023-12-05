#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
 void generateOTP()
 {
  char otp[5],votp[5],c;
  int i;
  srand((unsigned)time(NULL));
  for(i=0;i<4;i++)
  {
   c=rand()%10 + 48;
   if(isalnum(c))
   otp[i]=c;
  }
  otp[i]='\0'; // storing null in last
  printf("\nplease insert your card");
  printf("\nOTP IS SEND TO THE REGISTERED NUMBER");
  printf("\nOTP Generated: %s",otp);
  while(strcmp(otp,votp)!=0)   
 {
  printf("\nENTER THE  GENERATED OTP");
  scanf("%s",&votp);
  if(strcmp(otp,votp)!=0)
  
    printf("OTP  Mismatched....\n");
    
    
  }
}
 int main(void)
{
   generateOTP();
 
unsigned long amount=2000, deposition, withdrawal;
  int choice, pin, k;
  char transaction ='y';
	while (pin != 2025)
	{
		printf("ENTER YOUR SECRET PIN NUMBER:");
		scanf("%d", &pin);
		if (pin!=2025)
  
		printf("enter your valid pin number\n");
	}
	do
	{
		printf("********Welcome to ATM Service**************\n");
		printf("1. Check Balance\n");
		printf("2. Withdraw Cash\n");
		printf("3. Deposit Cash\n");
		printf("4. Quit\n");
		printf("******************?**************************?*\n\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("\n YOUR BALANCE IN Rs : %lu ", amount);
			break;
		case 2:
			printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
			scanf("%lu", &withdrawal);
			if (withdrawal % 100 != 0)
			{
				printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
			}
			else if (withdrawal <(amount- 2000))
			{
				printf("\n INSUFFICENT BALANCE");
			}
			else
			{
				amount = amount - withdrawal;
				printf("\n\n PLEASE COLLECT CASH");
				printf("\n YOUR CURRENT BALANCE IS%lu", amount);
			}
			break;
		case 3:
			printf("\n ENTER THE AMOUNT TO DEPOSIT");
			scanf("%lu", &deposition);
                        amount = amount + deposition;
			printf("YOUR BALANCE IS %lu", amount);
			break;
		case 4:
			printf("\n please collect your card");
			printf("\n THANK YOU FOR USING OUR ATM");
			break;
		default:
			printf("\n INVALID CHOICE");
		}
		printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");
		fflush(stdin);
		scanf("%c", &transaction);
		if (transaction == 'n'|| transaction == 'N')
                    k = 1;
	} while (!k);
	printf("\n\n THANKS FOR USING OUT ATM SERVICE /n");
}