/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrautne <mtrautne@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:09:47 by mtrautne          #+#    #+#             */
/*   Updated: 2022/05/04 08:58:34 by mtrautne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c < 40 || c > 176)
		return (0);
	return (1);
}

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	c;

	c = 177;
	printf("my: %i\nOG: %i\n", ft_isprint(c), isprint(c));
}
