/*Assignment name  : epur_str
Expected files   : epur_str.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que pegue uma string e exiba essa string com exatamente um
espaço entre as palavras, sem espaços ou tabulações no começo ou no fim,
seguido por um \n.

Uma "palavra" é definida como uma parte de uma string delimitada por espaços/tabulações, ou
pelo início/fim da string.

Se o número de argumentos não for 1, ou se não houver palavras para exibir, o
programa exibirá \n.

Example:

$> ./epur_str "See? It's easy to print the same thing" | cat -e
See? It's easy to print the same thing$
$> ./epur_str " this        time it      will     be    more complex  . " | cat -e
this time it will be more complex .$
$> ./epur_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
$
$> ./epur_str "" | cat -e
$
$>*/

#include <unistd.h>

void epur_str(char *str)
{
    int i = 0;
    int first = 1;

    while ((str[i] == 9 || str[i] == 32) && str[i])
        i++;

    while (str[i])
    {
        if (str[i] != 9 && str[i] != 32 && str[i])
        {
            if (!first)
                write(1, " ", 1);
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
        epur_str(av[1]);
    write(1, "\n", 1);
    return 0;
}

