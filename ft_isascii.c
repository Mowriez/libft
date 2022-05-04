/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrautne <mtrautne@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:05:33 by mtrautne          #+#    #+#             */
/*   Updated: 2022/05/04 08:58:27 by mtrautne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c < 0 || c > 177)
		return (0);
	return (1);
}

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	c;

	c = 180;
	printf("my: %i\nOG: %i\n", ft_isascii(c), isascii(c));
}
