#include <stdio.h>
2
#include <unistd.h>
3
/** 
4
* main - print the string in the put function
5
* Description: using the main function
6
* this program prints "Programming is like building a multilingual puzzle
7
* Return: 0
8
*/
9
int main(void)
10
{
11
        int i;
12
        
13
        for (i = '0'; i <= '9' ; i++)
14
        {
15
        putchar(i);
16
        if (i != '9')
17
        {
18
                putchar(',');
19
                putchar(' ');
20
        }
21
        }
22
        putchar('\n');
23
        return (0);
24
}
