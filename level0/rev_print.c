/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:27:03 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/11/24 16:31:57 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : rev_print
Expected files   : rev_print.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que pegue uma string e exiba a string ao contrário
seguido por uma nova linha.

Se o número de parâmetros não for 1, o programa exibirá uma nova linha.

Examples:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$*/

#include <unistd.h>

int size(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int len = size(av[1]);

		while (len--)
		{
			write(1, &av[1][len], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
