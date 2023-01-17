#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 1000000
#define TEST_SIZE 100000

unsigned char number[SIZE] = {0, };
unsigned int n[TEST_SIZE] = {0, };

int main()
{
    unsigned int i, j;
    unsigned int k = 0;
    unsigned int tmp;

    for(i = 2; i<(int)sqrt(SIZE); i++)
    {
        for(j = i*i; j <= SIZE; j += i)
        {
            if(number[j] % i == 0)
            {
                number[j] = 1;
            }
        }
    }
    
    do {
        scanf("%d", &tmp);
        n[k] = tmp;
        k++;
    } while(tmp != 0);
    
    for(i = 0; i<=k; i++)
    {
        for(j = 2; j <= n[i]/2; j++)
        {
            if(number[j] != 1 && number[n[i] - j] != 1)
            {
                printf("%d = %d + %d\n", n[i], j, n[i] - j);
                break;
            }
            else if(j == (n[i]/2))
            {
                printf("Goldbach's conjecture is wrong.");
            }
        }
    }

    return 0;
}
