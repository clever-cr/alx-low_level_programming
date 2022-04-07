#include <stdlib.h>
#include "main.h"

/**
* *array_range - creates an array of integers
*@min: minimum range of values stored
*@max: maximum range of values stored and number of elements
*Return: Pointer to the new array 
*/
int *array_range(int min, int max){
int *ptr;
int i, size;

if (min > max)
return (Null);

size = max - min + 1;

ptr = malloc(sizeof(int) * size);

if (ptr == NULL)
return (NuLL);

for (i = 0; min <= max; i++)
ptr[i] = min++;

return (ptr);
}