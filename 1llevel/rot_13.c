/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:33:34 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/11/24 17:21:57 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : rot_13
Expected files   : rot_13.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que pegue uma string e a exiba, substituindo
cada uma de suas letras pela letra 13 espaços à frente em ordem alfabética.

'z' se torna 'm' e 'Z' se torna 'M'. Maiúsculas e
minúsculas permanecem inalteradas.

A saída será seguida por uma nova linha.

Se o número de argumentos não for 1, o programa exibirá uma nova linha.

Example:

$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
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

			if ((c >= 'A' && c<= 'M') || (c >= 'a' && c<= 'm'))
				c += 13;
			else if ((c >= 'N' && c <= 'Z') || (c >= 'n' && c <= 'z'))
				c -= 13;

			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
