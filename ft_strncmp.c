/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrautne <mtrautne@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 13:17:09 by mtrautne          #+#    #+#             */
/*   Updated: 2022/07/07 10:55:05 by mtrautne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Function description:
compares the first (at most) n bytes of s1 and s2.

Return value:
returns an integer indicating the result of the comparison, as follows:
0, if the s1 and s2 are equal;
a negative value if s1 is less than s2;
a positive value if s1 is greater than s2.
Return fct needs to be typecast as unsigned char as testcases with chars
outside of the ascii table result in nonconforming behavior.

Particularities:
In glibc, as in most other implementations, the return value is the arithmetic
result of subtracting  the last compared byte in s2 from the last compared 
byte in s1. (If the two characters are equal, this difference is 0.)*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && (i + 1) < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	const char*	i = "test\200";
// 	const char*	j = "test\0";
// 	size_t	k	= 6;

// 	printf("OG: %d\nMY: %d\n", strncmp(i, j, k), ft_strncmp(i, j, k));
// }