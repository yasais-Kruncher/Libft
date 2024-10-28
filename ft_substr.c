/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhindou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:14:12 by ykhindou          #+#    #+#             */
/*   Updated: 2024/10/27 11:28:41 by ykhindou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,size_t len)
{
	char	*substring;
	size_t	i;
	size_t	s_length;

	s_length = ft_strlen(s);
	if (start > s_length)
		return (NULL);
	substring = (char *)malloc((len + 1) * sizeof(char));
	if(!substring)
		return (NULL);
	i = 0;
	while (i < len && (i + len) <= s_length)
	{
		substring[i] = s[i + start];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
