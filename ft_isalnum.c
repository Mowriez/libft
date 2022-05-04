/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrautne <mtrautne@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:16:14 by mtrautne          #+#    #+#             */
/*   Updated: 2022/05/04 08:13:11 by mtrautne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (c < '0' || (c > '9' && c < 'A')
		|| (c > 'Z' && c < 'a') || c > 'z')
		return (0);
	return (1);
}

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	c;

	c = ' ';
	printf("my: %i\nOG: %i\n", ft_isalnum(c), isalnum(c));
}
