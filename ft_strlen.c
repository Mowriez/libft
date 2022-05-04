/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrautne <mtrautne@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:23:06 by mtrautne          #+#    #+#             */
/*   Updated: 2022/05/04 08:59:18 by mtrautne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*s;

	s = "test";
	printf("Me: %zu\nOG: %zu\n", ft_strlen(s), strlen(s));
}