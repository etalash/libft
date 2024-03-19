/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 15:29:48 by stalash           #+#    #+#             */
/*   Updated: 2024/03/19 12:03:42 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (d > s)
	{
		i = len;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char x[] = "abcdefghi";
//     memmove(&x[3], &x[0], 6);
//     printf("after memmove: %s\n", x);
//     char y[] = "abcdefghi";
//     ft_memmove(&y[3], &y[0], 6);
//     printf("after memcpy:  %s\n", y);
// }
