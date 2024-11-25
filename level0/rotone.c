/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:24:35 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/11/24 17:35:36 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : rotone
Expected files   : rotone.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que pegue uma string e a exiba,
substituindo cada uma de suas letras pela próxima em ordem alfabética.

'z' se torna 'a' e 'Z' se torna 'A'. A caixa permanece inalterada.

A saída será seguida por um \n.

Se o número de argumentos não for 1, o programa exibirá \n.

Example:

$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
$>*/

#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		char c;

		while (av[1][i])
		{
			c = av[1][i];

			if (c == 'z')
				c = 'a';
			else if (c == 'Z')
				c = 'A';
			else if ((c >= 'A' && c <= 'Y') || (c >= 'a' && c <= 'y'))
				c = c + 1;

			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
