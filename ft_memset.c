/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrautne <mtrautne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:42:13 by mtrautne          #+#    #+#             */
/*   Updated: 2022/05/04 12:01:36 by mtrautne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*a;

	i = 0;
	a = (unsigned char *) b;
	while (i < len)
	{
		a[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char	b[5] = "Test";
	int		c;
	size_t	len;

	c = '2';
	len = 3;
	printf("%s\n", (unsigned char *)ft_memset(b, c, len));
}
