#include <cs50.h>
#include <stdio.h>

int calculate_quarters(int *cents);
int calculate_dimes(int *cents);
int calculate_nickels(int *cents);
int calculate_pennies(int *cents);

int main(void)
{
    // Prompt the user for change owed, in cents
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    // Calculate the number of quarters, dimes, nickels, and pennies
    int total_coins = 0;
    total_coins += calculate_quarters(&cents);
    total_coins += calculate_dimes(&cents);
    total_coins += calculate_nickels(&cents);
    total_coins += calculate_pennies(&cents);

    // Output the total number of coins
    printf("%d\n", total_coins);
}

int calculate_quarters(int *cents)
{
    int quarters = 0;
    while (*cents >= 25)
    {
        quarters++;
        *cents -= 25;
    }
    return quarters;
}

int calculate_dimes(int *cents)
{
    int dimes = 0;
    while (*cents >= 10)
    {
        dimes++;
        *cents -= 10;
    }
    return dimes;
}

int calculate_nickels(int *cents)
{
    int nickels = 0;
    while (*cents >= 5)
    {
        nickels++;
        *cents -= 5;
    }
    return nickels;
}

int calculate_pennies(int *cents)
{
    int pennies = 0;
    while (*cents >= 1)
    {
        pennies++;
        *cents -= 1;
    }
    return pennies;
}
