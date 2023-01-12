#include <stdio.h>

unsigned int gcd(unsigned int x, unsigned int y);

int main()
{
    unsigned int n1, n2, n = 0;
    scanf("%d", &n1);
    scanf("%d", &n2);
    
    n = gcd(n1,n2);
    printf("%d\n", n);
    n = (n1*n2)/n;
    printf("%d", n);

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
