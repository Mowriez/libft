/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrautne <mtrautne@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:20:35 by mtrautne          #+#    #+#             */
/*   Updated: 2022/05/04 08:58:30 by mtrautne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	c;

	c = '1';
	printf("my: %i\nOG: %i\n", ft_isdigit(c), isdigit(c));
}
