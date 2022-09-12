/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 12:23:51 by nadesjar          #+#    #+#             */
/*   Updated: 2022/09/11 20:57:26 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *src, unsigned int start, size_t len)
{
	char	*str;
	size_t	my_len;
	size_t	i;

	if (!src)
		return (NULL);
	my_len = strlen((char *) src);
	if (my_len < len)
		str = calloc((my_len + 1), sizeof(char));
	else
		str = calloc((len + 1), sizeof(char));
	if (!str)
		return (NULL);
	if (start >= my_len)
		return (str);
	i = 0;
	while (i < len && src[i] != '\0')
	{
		str[i] = src[start + i];
		i++;
	}
	return (str);
}
