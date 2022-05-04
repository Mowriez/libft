/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrautne <mtrautne@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:12:33 by mtrautne          #+#    #+#             */
/*   Updated: 2022/05/04 08:58:45 by mtrautne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (c < 'A' || (c > 'Z' && c < 'a') || c > 'z')
		return (0);
	return (1);
}

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	c;

	c = 'a';
	printf("my: %i\nOG: %i\n", ft_isalpha(c), isalpha(c));
}
