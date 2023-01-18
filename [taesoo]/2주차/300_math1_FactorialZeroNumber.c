#include <stdio.h>

int main() 
{
	unsigned short N;
	unsigned short five = 0;
	unsigned short twoFive = 0;
	unsigned short oneTwoFive = 0;

	scanf("%hu", &N);

	five = N/5;
	twoFive = N/25;
	oneTwoFive = N/125;

	printf("%hu", five + twoFive + oneTwoFive);

	return 0;
}
