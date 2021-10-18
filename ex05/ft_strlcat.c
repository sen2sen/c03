/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seohuisu <seohuisu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 00:59:04 by seohuisu          #+#    #+#             */
/*   Updated: 2021/10/19 01:17:04 by seohuisu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	d;
	unsigned int	s;

	i = ft_strlen(dest);
	j = 0;
	d = ft_strlen(dest);
	s = ft_strlen(src);
	if (size < 1)
		return (s + size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < d)
		return (s + size);
	else
		return (d + s);
}

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int				main(void)
{
	char			dest[50] = "hello my name is";
	char			src[50] = " huisu";
	unsigned int	size;
	char			dest2[50] = "hello my name is";
	char			src2[50] = " huisu";

	size = 21;
	printf("%lu\n", strlcat(dest, src, size));
	printf("dest: %s\nsrc: %s\n", dest, src);
	printf("%d\n", ft_strlcat(dest2, src2, size));
	printf("dest: %s\nsrc: %s\n", dest2, src2);
}
