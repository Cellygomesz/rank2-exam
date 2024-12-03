/*
Assignment name  : hidenp
Expected files   : hidenp.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa chamado hidenp que pegue duas strings e exiba 1
seguido por uma nova linha se a primeira string estiver oculta na segunda,
caso contrário, exiba 0 seguido por uma nova linha.

Sejam s1 e s2 strings. Dizemos que s1 está oculto em s2 se for possível
encontrar cada caractere de s1 em s2, na mesma ordem em que aparecem em s1.
Além disso, a string vazia está oculta em qualquer string.

Se o número de parâmetros não for 2, o programa exibirá uma nova linha.

Examples :

$>./hidenp "fgex.;" "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6" | cat -e
1$
$>./hidenp "abc" "2altrb53c.sse" | cat -e
1$
$>./hidenp "abc" "btarc" | cat -e
0$
$>./hidenp | cat -e
$
$>*/

#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 3)
    {
        int i = 0;
        int j = 0;

        while (av[2][j] && av[1][i])
        {
            if (av[2][j] == av[1][i])
                i++;
            j++;
        }
        if (av[1][i] == '\0')
            write(1, "1", 1);
        else
            write(1, "0", 1);
    }
    write(1, "\n", 1);
    return 0;
}