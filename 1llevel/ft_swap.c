/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:39:50 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/11/23 16:59:19 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : ft_swap
Expected files   : ft_swap.c
Allowed functions: 
--------------------------------------------------------------------------------

Escreva uma função que troque o conteúdo de dois inteiros cujos endereços
são passados como parâmetros.

Sua função deve ser declarada da seguinte forma:

void	ft_swap(int *a, int *b);*/

void	ft_swap(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

/*
// --------- test main ----------

#include <stdio.h>

int main(void)
{
	int var3 = 42;
	int var4 = 84;

	int *var1 = &var3;
	int *var2 = &var4;

	printf("antes: var1 = %d, var2 = %d\n", *var1, *var2);
	ft_swap(var1, var2);
	printf("antes: var1 = %d, var2 = %d\n", *var1, *var2);

	return (0);
}*/
