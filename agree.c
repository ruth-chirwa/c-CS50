#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char c = get_char("Do you like ice cream? ");

    if (c == 'y' || c == 'Y')
    {
        printf("Yes, I do!\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("No, I don't.\n");
    }
    else
    {
        printf("Invalid input. Please enter 'y', 'Y', 'n', or 'N'.\n");
    }

    return 0;
}
