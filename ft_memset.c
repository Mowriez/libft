/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrautne <mtrautne@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:42:13 by mtrautne          #+#    #+#             */
/*   Updated: 2022/06/08 20:47:31 by mtrautne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Function description:
writes len bytes of value c (converted to an unsigned char) to the string b.

Return value:
returns its first argument.

Particularities:
Cant write int (or char for that matter) directly to void pointer, as it isn't
of the right type (number of reserved bits for element etc. is unclear.). So
first its neccessary to give another pointer with the right type the same
address as b, and write to this pointer - effectively overwriting b. as len
amount of c are then written to the same area as b, it should not matter which
pointer is returned.*/

#include "libft.h"

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

/*#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char	b[5] = "Test";
	int		c;
	size_t	len;

	c = '2';
	len = 3;
	printf("%s\n", (unsigned char *)ft_memset(b, c, len));
}*/