#include "main.h"

/**
 * _islower - Entry point
 * Description: checks is a character is lowercase
 * Return: 1 if true. 0 if false.
 */
int _islower(int c)
{
        int i;
        char alpha[25] = "abcdefghijklmnopqrstuvwxyz";

        for (i = 1; i <= 25; i++)
        {
                if (c == alpha[i])
                {
                        return (1);
                }
        }
        return (0);
}
