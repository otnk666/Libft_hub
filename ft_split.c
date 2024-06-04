/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <komatsu@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:35:46 by skomatsu          #+#    #+#             */
/*   Updated: 2024/06/04 16:35:52 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_delimiter(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	ft_wordlength(char *str, char *charset)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (*str)
	{
		if (ft_delimiter(*str, charset) == 0)
			len++;
		else
			break ;
		str++;
	}
	return (len);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_delimiter(str[i], charset) == 0 && ft_delimiter(str[i + 1],
				charset) == 1)
			words++;
		i++;
	}
	return (words);
}

char	*ft_pass_ward(char *str, char *charset)
{
	int		i;
	int		len;
	char	*word;

	i = 0;
	len = 0;
	while (str[len] && !ft_delimiter(str[len], charset))
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL);
	while (str[i] && i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**split_str;
	int		i;
	int		len;

	i = 0;
	split_str = (char **)malloc(sizeof(char *)
			* (count_words(str, charset) + 1));
	if (!split_str)
		return (NULL);
	len = ft_wordlength(str, charset);
	while (*str != '\0')
	{
		if (!len)
			str++;
		else
		{
			split_str[i] = ft_pass_ward(str, charset);
			if (split_str[i] == NULL)
				return (NULL);
			i++;
			str += len;
		}
	}
	split_str[i] = NULL;
	return (split_str);
}