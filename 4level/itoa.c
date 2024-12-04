/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:27:20 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/12/04 15:58:22 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Escreva uma função que pegue um int e o converta em uma string terminada em nulo.
A função retorna o resultado em um array char que você deve alocar.

Sua função deve ser declarada da seguinte forma:

char	*ft_itoa(int nbr);*/

#include <stdlib.h>
char	*ft_itoa(int nbr)
{
	int i = 0;
	int num = nbr;
	char *r;
	int temp = 0;

	if (num < 0)
	{
		i++;
		num *= -1;
	}
	while (num > 0)
	{
		num = (num / 10);
		i++;
	}
	r = (char *)malloc((sizeof(char) * i) + 1);

	r[i] = '\0';
	i--;

	if (nbr < 0)
	{
		r[0] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		temp = (nbr % 10);
		r[i] = temp + '0';
		nbr /= 10;
		i--;
	}

	return (r);
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("%s\n", ft_itoa(-420));

}
