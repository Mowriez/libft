/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrautne <mtrautne@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:31:14 by mtrautne          #+#    #+#             */
/*   Updated: 2022/06/08 20:08:39 by mtrautne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Function description:
converts lowercase letters to uppercase. The argument must be representable as 
an unsigned char or the value of EOF.

Return value:
value of the converted letter, or c if the conversion was not possible.*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	int	c;

// 	c = 'a';
// 	printf("OG %d\nMY %d\n", toupper(c), ft_toupper(c));
// }