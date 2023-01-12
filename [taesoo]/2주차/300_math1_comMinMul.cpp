#include <stdio.h>
#include <stdlib.h> 

unsigned int gcd(unsigned int x, unsigned int y);

int main()
{
    unsigned int n = 0;
    unsigned int inputNumber, itr = 0;
    scanf("%d", &inputNumber);
    
    int* n1 = (int*)malloc(sizeof(int) * inputNumber);
    int* n2 = (int*)malloc(sizeof(int) * inputNumber);
    
    for(itr = 0; itr<inputNumber; itr++)
    {
        scanf("%d", &n1[itr]);
        scanf("%d", &n2[itr]);
    }
    
    for(itr = 0; itr<inputNumber; itr++)
    {
        n = (n1[itr]*n2[itr])/gcd(n1[itr],n2[itr]);
        printf("%d\n", n);
    }
    
    free(n1);
    free(n2);
    return 0;
}

unsigned int gcd(unsigned int x, unsigned int y)
{
    int z;
	while(y)
	{
		z = x % y;
		x = y;
		y = z;
	}
    return x;
}
