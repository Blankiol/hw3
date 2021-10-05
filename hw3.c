#include <stdio.h>

int main(void)
{
	int prime;
	int i = 0;
	int sum = 0;
	
	printf("Please enter a number: ");
	scanf("%d", &prime);

	for (i = 1; i <= prime; i++) {
		int result = prime % i;
		if (result == 0)
			sum = sum + 1;
	}

	if (sum == 2)
		printf("It is a prime number. \n");
	else
		printf("It is not a prime number. \n");

	return 0;
}