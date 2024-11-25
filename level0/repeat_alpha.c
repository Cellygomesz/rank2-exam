/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 17:00:19 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/11/24 16:24:09 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa chamado repeat_alpha que pegue uma string
e a exiba repetindo cada caractere alfabético tantas vezes 
quanto seu índice alfabético, seguido por uma nova linha.

'a' se torna 'a', 'b' se torna 'bb', 'e' se torna 'eeeee', etc...

Caso permaneça inalterado.

Se o número de argumentos não for 1, apenas exiba uma nova linha.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>*/

#include <unistd.h>

int	count(char c)
{
	int i = 0;

	if (c >= 'a' && c <= 'z')
		i = (c - 'a') + 1;
	else if (c >= 'A' && c <= 'Z')
		i = (c - 'A') + 1;
	else
		return (1);
	return (i);
}


int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		int repeat = 0;

		while (av[1][i])
		{
			repeat = count(av[1][i]);
			while (repeat > 0)
			{
				write(1, &av[1][i], 1);
				repeat--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
