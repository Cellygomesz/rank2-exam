/*Assignment name  : expand_str
Expected files   : expand_str.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que pegue uma string e a exiba com exatamente três espaços
entre cada palavra, sem espaços ou tabulações no começo ou no fim,
seguido por uma nova linha.

Uma palavra é uma seção de string delimitada por espaços/tabulações ou pelo
início/fim da string.

Se o número de parâmetros não for 1, ou se não houver palavras, simplesmente exiba
uma nova linha.

Examples:

$> ./expand_str "See? It's easy to print the same thing" | cat -e
See?   It's   easy   to   print   the   same   thing$
$> ./expand_str " this        time it      will     be    more complex  " | cat -e
this   time   it   will   be   more   complex$
$> ./expand_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
$
$> ./expand_str "" | cat -e
$
$>*/

// passo a passo:
// 1 - sem espaços ou tabulações no começo [x]
// 2 - exiba a string com exatamente três espaços entre cada palavra
// 3 - sem espaços ou tabulações no fim


#include <unistd.h>

void    expand_str(char *str)
{
    int i = 0;
    int first = 1;

    while ((str[1] == 9 || str[i] == 32) && str[i])
        i++;

    while (str[i])
    {
        if (str[i] != 9 && str[i] != 32 && str[i])
        {
            if (!first)
                write(1, "   ", 3);

            first = 0;

            while (str[i] != 9 && str[i] != 32 && str[i])
            {
                write(1, &str[i], 1);
                i++;
            } 
        }
        else
            i++;
    }

}

int main(int ac, char **av)
{
    if (ac == 2)
        expand_str(av[1]);
    write(1, "\n", 1);
    return 0;
}