/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:04:36 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/12/04 15:04:39 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
	int flag = 1;
	int r = 0;

	while (str[i] && str[i] >= 9 && str[i] <= 32)
		i++;

	if (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			flag *= -1;
		i++;
	}

	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		r = (r * 10) + (str[i] - '0');
		i++;
	}
	return (r * flag);

}


void	print_hex(int num)
{
	char *hex = "0123456789abcdef";

	if (num > 15)
	{
		print_hex(num / 16);
		print_hex(num % 16);
	}
	else
		write(1, &hex[num], 1);
}


int main(int ac, char **av)
{
	if (ac == 2)
	{
		print_hex(ft_atoi(av[1]));
	}
	write(1, "\n", 1);
	return 0;
}
