#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
*main - Add positive numbers
*@argc: Number of command line argumemts
*@argv: Array name
*Return: 1 if a number contains symbols, otherwise 0
*/
int main(int argc, char *argv[])
{
int x = 0, i, j;

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (isdigit(argv[i][j] == 0))
{
printf("Error\n");
return(1); 
}
}
}
for (i = 1; i < argc; i++)
{
x += atoi(argv[i]);
}
printf("%d\n", x);
return (0);
}
