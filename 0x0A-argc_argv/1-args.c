#include <stdio.h>

/**
* main- Prints number of arguments passed into it
* @argc: number of command line arguments
* @argv: argument that contains vector string
*
* Return: 0
*/

int main(int argc, char *argv[]__attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
