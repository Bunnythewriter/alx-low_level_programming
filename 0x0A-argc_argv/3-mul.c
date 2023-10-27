#include <stdio.h>
#include <stdlib.h>


/**
 * Main- multiplies two numbers
 * @argc: number of command line arguments
 * @argv: argument that contains vector string
 * Return: 0
 * 
*/

int main(int argc, char* argv)
{
    int a;

    if(argc != 3)
    {
        printf("Error\n");
        return 1;
    }

    printf("%d\n", atoi(argv[1])* atoi(argv[2]));
    return 0;
}