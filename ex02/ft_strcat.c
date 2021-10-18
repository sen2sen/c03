/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seohuisu <seohuisu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 00:09:20 by seohuisu          #+#    #+#             */
/*   Updated: 2021/10/19 00:23:35 by seohuisu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i1;
	int	i2;

	i1 = 0;
	i2 = 0;
	while (dest[i1] != '\0')
		i1++;
	while (src[i2] != '\0')
	{
		dest[i1] = src[i2];
		i1++;
		i2++;
	}
	dest[i1] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>

int		main(void)
{
	char	dest[50] = "hello";
	char	*src;
	char	dest2[50] = "hello";
	char	*src2;

	src = " my name is huisu";
	src2 = " my name is huisu";
	printf(".%s.\n", ft_strcat(dest, src));
	printf(".%s.\n", strcat(dest2, src2));
}