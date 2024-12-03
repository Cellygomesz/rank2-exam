/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:37:25 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/11/23 16:38:47 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : ft_strlen
Expected files   : ft_strlen.c
Allowed functions:
--------------------------------------------------------------------------------

Escreva uma função que retorne o comprimento de uma string.

Sua função deve ser declarada da seguinte forma:

int	ft_strlen(char *str);*/

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return i;
}
