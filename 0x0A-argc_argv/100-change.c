#include <stdio.h>
#include <stdlib.h>

/**
*main - prints the minimum number of coins to make change
*@argc: Number of command line of argument
*@argv: Array name
*Return:
*/
int main(int argc, char *argv[])
{
int i, n, s, ch = 0;
int c[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Erro\n");
return (1);
}
s = atoi(argv[1]);
if (s < 1)
printf("0\n");
else 
{
for (i = 0; i < 5; i++)
{
n = s / c[i];
ch += n;
s -= n * c[i];
}
printf("%d\n", ch);
}
return (0);

}
