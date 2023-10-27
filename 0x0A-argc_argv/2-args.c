#include <stdio.h>

/**
 * Main- prints all arguments it receives
 * @argc: number of command line arguments
 * @argv: argument that contains vector string
 * 
 * Return: 0
*/

int main(int argc, char *argv[])
{
    int i;
    for (i = 0; i < argc; i++)
    {
    printf("%s\n", argv[i]);
    }
    return (0);
}