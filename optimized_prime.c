#include <stdio.h>
#include <math.h>
int prime(long n)
{
    long int a = 0, b = 0, i = 1;
    if (n == 1)
    {
        return 2;
    }
    for (i = 1; b < sqrt(n); i++)
    {
        a = 6 * i + 1;
        b = 6 * i - 1;
        if ((n % a == 0 || n % b == 0||n%2==0||n%3==0) && (n != a && n != b))
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    long int num;
    printf("Enter The Number:");
    scanf("%d", &num);
    if (prime(num) == 1)
        printf("Your entered number %d is prime", num);
    else if (prime(num) == 0)
        printf("Your entered number %d is non-prime", num);
    else if (prime(num) == 2)
        printf("%d number is neither prime nor composite",num);
    return 0;
}