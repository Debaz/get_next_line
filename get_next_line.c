/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Debaz <klescaud@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/20 16:44:57 by Debaz             #+#    #+#             */
/*   Updated: 2015/10/21 18:58:43 by Debaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <get_next_line.h>

static int	read_to_buffer(int fd, char **stock)
{
	static char		buffer[BUFF_SIZE + 1] = {'\n'};
	int				bytes;
	char			*new_str;

	bytes = read(fd, buffer, BUFF_SIZE);
	if (bytes > 0)
	{
		buffer[bytes] = '\0';
		new_str = ft_strjoin(*stock, buffer);
		if (!new_str)
			return (-1);
		free(*stock);
		*stock = new_str;
	}
	return (bytes);
}

int			get_next_line(int fd, char **line)
{
	static char		*stock = NULL;
	char			*end_index;
	int				ret;

	if ((!stock && (stock = ft_memalloc(sizeof(char))) == NULL) || fd < 0)
		return (-1);
	end_index = ft_strchr(stock, '\n');
	while (end_index == NULL)
	{
		ret = read_to_buffer(fd, &stock);
		if (ret == 0)
		{
			if ((end_index = ft_strchr(stock, '\0')) == stock)
				return (0);
		}
		else if (ret < 0)
			return (-1);
		end_index = ft_strchr(stock, '\n');
	}
	if ((*line = ft_strsub(stock, 0, (end_index - stock))) && !(*line))
		return (-1);
	end_index = ft_strdup(end_index + 1);
	free(stock);
	stock = end_index;
	return (1);
}
