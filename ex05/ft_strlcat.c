/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwiller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 11:39:44 by lwiller           #+#    #+#             */
/*   Updated: 2020/09/25 10:06:41 by lwiller          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int ln_src;
	unsigned int ln_dest;

	i = 0;
	j = 0;
	ln_src = ft_strlen(src);
	ln_dest = ft_strlen(dest);
	while (dest[i])
		i++;
	if ((ln_src + ln_dest) > size)
		return (ln_src + size);
	while (j < ln_src && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i + j);
}
