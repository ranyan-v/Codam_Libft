/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:59:30 by rayan             #+#    #+#             */
/*   Updated: 2025/11/11 19:25:12 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief 
 * 
 * @param s_len 
 * @param start 
 * @param len 
 * @return size_t 
 */
size_t	ft_sublen(size_t s_len, size_t start, size_t len)
{
	size_t	sub_len;

	if ((s_len - start) < len)
		sub_len = s_len - start;
	else
		sub_len = len;
	return (sub_len);
}

/**
 * @brief 
 * 
 * @param s 
 * @param sub 
 * @param sub_len 
 * @param start 
 */
void	ft_putsubstr(char const *s, char *sub, size_t sub_len, size_t start)
{
	size_t	i;

	i = 0;
	while (i < sub_len && s[start + i])
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
}

/**
 * @brief 
 * 
 * @param s 
 * @param start 
 * @param len 
 * @return char* 
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	sub_len;
	char	*sub;

	if (!s)
		return (0);
	s_len = 0;
	while (s[s_len])
		s_len++;
	if (start >= s_len)
	{
		sub = (char *)malloc(1);
		if (!sub)
			return (0);
		sub[0] = '\0';
		return (sub);
	}
	sub_len = ft_sublen(s_len, start, len);
	sub = (char *)malloc(sub_len +1);
	if (!sub)
		return (0);
	ft_putsubstr(s, sub, sub_len, start);
	return (sub);
}
