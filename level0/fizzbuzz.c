/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:32:12 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/11/23 16:23:30 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : fizzbuzz
Expected files   : fizzbuzz.c
Allowed functions: write
--------------------------------------------------------------------------------

Escreva um programa que imprima os números de 1 a 100,
cada um separado por uma nova linha.

Se o número for múltiplo de 3, ele imprime 'fizz' em vez disso.

Se o número for múltiplo de 5, ele imprime 'buzz' em vez disso.

Se o número for múltiplo de 3 e múltiplo de 5,
ele imprime 'fizzbuzz' em vez disso.

Example:

$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
[...]
97
98
fizz
buzz
$> */

#include <unistd.h>

void	mini_putnbr(int num)
{

	if (num <= 9)
	{
		num = num + '0';
		write(1, &num, 1);
	}
	else
	{
		mini_putnbr(num / 10);
		mini_putnbr(num % 10);
	}
}

void	number(int num)
{
	int i;

	for (i = 1; i <= num; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0 && i % 5 != 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0 && i % 3 != 0)
			write(1, "buzz", 4);
		else
			mini_putnbr(i);
		write(1, "\n", 1);
	}
}

int main(void)
{
	number(100);
	return (0);
}
