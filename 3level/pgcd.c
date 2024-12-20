/*Assignment name  : pgcd
Expected files   : pgcd.c
Allowed functions: printf, atoi, malloc, free
--------------------------------------------------------------------------------

Escreva um programa que pegue duas strings representando dois inteiros
estritamente positivos que se encaixam em um int.

Exiba seu maior denominador comum seguido por uma nova linha (é sempre um
inteiro estritamente positivo).

Se o número de parâmetros não for 2, exiba uma nova linha.

Examples:

$> ./pgcd 42 10 | cat -e
2$
$> ./pgcd 42 12 | cat -e
6$
$> ./pgcd 14 77 | cat -e
7$
$> ./pgcd 17 3 | cat -e
1$
$> ./pgcd | cat -e
$*/

#include <stdio.h>
#include <stdlib.h>

unsigned int    pgcd(unsigned int a,unsigned int b)
{
    while (b != 0)
    {
        unsigned int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        if (av[1][0] == '-' || av[2][0] == '-')
        {
            printf("\n");
            return (1);
        }

        unsigned int num1 = atoi(av[1]);
        unsigned int num2 = atoi(av[2]);

        unsigned int r = pgcd(num1, num2);
        printf("%d", r);

    }
    printf("\n");
    return(0);
}
