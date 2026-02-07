#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("Enter n: ");

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}
