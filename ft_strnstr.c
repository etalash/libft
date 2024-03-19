/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:18:40 by stalash           #+#    #+#             */
/*   Updated: 2024/03/19 13:19:13 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	need_len;

	if (len < ft_strlen(needle))
		return (NULL);
	if (!*needle)
		return ((char *)haystack);
	else if (len == 0)
		return (NULL);
	need_len = 0;
	while (needle[need_len] != '\0')
		need_len++;
	i = 0;
	while (haystack[i] != '\0' && (len - need_len) >= i)
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// // 	const char *str = "Hello";
// // 	const char *to_find = "l";
// // 	const char *str1;
// // 	const char *str2;

// // 	str1 = ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 15);
// // 	str2 = ft_strnstr("lorem ipsum dolor sit amet", "dol", 30);
// // 	printf("%s\n", str1);
// // 	printf("%s\n", str2);
// // 	printf("str = %s\nto_find = %s\n",str, to_find);
// // 	printf("\n rec = %s\n",ft_strnstr(str, to_find, sizeof(str)));
// // // 	printf("%s\n", ft_strnstr("lorem
// // // ipsum dolor sit  	 lorem ipsum dolor", "ipsum", 35));
// // 	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolorn", 0));
// 	printf("%s\n", ft_strnstr("abcdefgh", "abc\n", 2));
// 	return (0);
// }