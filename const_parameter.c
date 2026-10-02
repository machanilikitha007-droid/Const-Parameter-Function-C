#include <stdio.h>

void displayNumber(const int number)
{
    printf("Number = %d\n", number);
}

int main()
{
    int value = 75;

    displayNumber(value);

    return 0;
}
