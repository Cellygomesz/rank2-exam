/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:38:15 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/11/24 23:13:17 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : search_and_replace
Expected files   : search_and_replace.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Escreva um programa chamado search_and_replace que receba 3 argumentos,
o primeiro argumento é uma string na qual substituir uma
letra (2º argumento) por outra (3º argumento).

Se o número de argumentos não for 3, apenas exiba uma nova linha.

Se o segundo argumento não estiver contido no primeiro (a string)
então o programa simplesmente reescreve a string seguida por uma nova linha.

Examples:

$>./search_and_replace "Papache est un sabre" "a" "o"
Popoche est un sobre

$>./search_and_replace "zaz" "art" "zul" | cat -e
$

$>./search_and_replace "zaz" "r" "u" | cat -e
zaz$

$>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
$

$>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
ZaZ eT David aiME le METal.$

$>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
eNcOre Un ExEmPle Pas Facile a Ecrire $*/

#include <unistd.h>

//---------------INCOMPLETA--------------\\

void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int exist(char *str, char c)
{
	int i = 0;
	int r = 0;

	while (str[i])
	{
		if (str[i] == c)
			r = 1;
		i++;
	}
	return r;
}


int main(int ac, char **av)
{
	if (ac == 4)
	{
		int yn = exist(av[1], av[2][0]);
		if (yn == 0)
		{
			ft_putstr(av[1]);
		}
		else if (yn == 1)
		{
			int i = 0;
			while (av[1][i])
			{
				if (av[1][i] == av[2][0])
					write(1, &av[3][0], 1);
				else
					write(1, &av[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);	
	return (0);
}
