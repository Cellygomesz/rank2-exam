/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 09:13:53 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/11/27 09:47:59 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Escreva um programa que receba um inteiro positivo como argumento e exiba
a soma de todos os números primos inferiores ou iguais a ele
seguidos por uma nova linha.

Se o número de argumentos não for 1, ou o argumento não for um
número positivo, apenas exiba 0 seguido por uma nova linha.

Sim, os exemplos estão corretos.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>*/

#include <unistd.h>

int	prime(int num)
{
	int i = 2;
	while (i < num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	sum(int num)
{
	while ()
	{
		if (prime(num) == 0)
		{
			
		}


	}

}

int main(int ac, char **av)
{
	if (ac == 2 && av[1][0] != '-')
	{
		sum(av[1]);
		write(1, "\n", 1);
	}
	else
		write(1, "0\n", 1);
	return 0;
}
