/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:35:52 by rayan             #+#    #+#             */
/*   Updated: 2025/11/11 19:21:24 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief 
 * 
 * @param s 
 * @param c 
 * @return int 
 */
int	ft_split_count(char const *s, char c)
{
	int	count;
	int	in;

	count = 0;
	in = 0;
	while (*s)
	{
		if (*s != c && in == 0)
		{
			in = 1;
			count++;
		}
		else if (*s == c)
			in = 0;
		s++;
	}
	return (count);
}

/**
 * @brief 
 * 
 * @param s 
 * @param c 
 * @return char* 
 */
char	*ft_split_word(char const *s, char c)
{
	int		len;
	int		i;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

/**
 * @brief 
 * 
 * @param output 
 * @param loc 
 */
void	ft_split_free(char **output, int loc)
{
	while (loc > 0)
	{
		free(output[loc - 1]);
		loc--;
	}
	free(output);
}

/**
 * @brief 
 * 
 * @param s 
 * @param c 
 * @param output 
 * @return char** 
 */
char	**ft_split_fill(char const *s, char c, char **output)
{
	int	loc;

	loc = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			break ;
		output[loc] = ft_split_word(s, c);
		if (!output[loc])
		{
			ft_split_free(output, loc);
			return (NULL);
		}
		while (*s && *s != c)
			s++;
		loc++;
	}
	output[loc] = NULL;
	return (output);
}

/**
 * @brief 
 * 
 * @param s 
 * @param c 
 * @return char** 
 */
char	**ft_split(char const *s, char c)
{
	int		count;
	char	**output;

	if (!s)
		return (NULL);
	count = ft_split_count(s, c);
	output = malloc((count + 1) * sizeof(char *));
	if (!output)
		return (NULL);
	return (ft_split_fill(s, c, output));
}
