/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:19:39 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/11/23 15:29:01 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : first_word
Expected files   : first_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que pegue uma string e exiba sua 
primeira palavra, seguida por uma nova linha.

Uma palavra é uma seção de string delimitada por espaços/tabulações 
ou pelo início/fim da string.

Se o número de parâmetros não for 1, ou se não houver palavras,
simplesmente exiba uma nova linha.

Examples:

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...       is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>*/

#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		while ((av[1][i] == 32 || av[1][i] == 9) && av[1][i])
			i++;
		while (!(av[1][i] == 32 || av[1][i] == 9) && av[1][i])
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
