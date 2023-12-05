// C program to check if a number is
// even or not using goto statement
#include <stdio.h>

int main() {
	int num = 26;
	if (num % 2 == 0)
		goto even;
	else
		goto odd;
even:
	printf("%d is even\n", num);
    int a;
    printf("ENTER THE NUMBER : ");
    scanf("%d" ,&a);
	if (a % 2 == 0)
		goto even;
	else
		goto odd;
	return;
odd:
	printf("%d is odd", num);
	return ;

	printf("hello");
}
