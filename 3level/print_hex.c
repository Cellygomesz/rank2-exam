/*Assignment name  : print_hex
Expected files   : print_hex.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que pegue um número positivo (ou zero) expresso na base 10,
e o exiba na base 16 (letras minúsculas) seguido por uma nova linha.

Se o número de parâmetros não for 1, o programa exibirá uma nova linha.

Examples:

$> ./print_hex "10" | cat -e
a$
$> ./print_hex "255" | cat -e
ff$
$> ./print_hex "5156454" | cat -e
4eae66$
$> ./print_hex | cat -e
$
*/

#include <unistd.h>

int	ft_atoi(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] >= 0 && str[i] <= 9)
	}
}

void	hex(int num)
{
	if (num >= 0 && num <= 9)
		write(1, &num, 1);
	else if (num > 9)
	{
		hex(num / 16);
		hex(num % 16);
	}
}


int main(int ac, char **av)
{
	if (ac == 2)
	{
		if (av[1] < 0)
		{
			write(1, "\n", 1);
			return 0;
		}
		hex(av[1]);
	}
	write(1, "\n", 1);
	return 0;
}
