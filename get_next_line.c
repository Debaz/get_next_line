/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Debaz <klescaud@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/20 16:44:57 by Debaz             #+#    #+#             */
/*   Updated: 2015/10/21 15:05:20 by klescaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <get_next_line.h>

void	grow_your_buff(char *buffer)
{
	buffer = ft_strjoin(buffer, ft_strnew(BUFF_SIZE));
}

int		get_next_line(int fd, char **line)
{
	int		ret;

	if (fd < 0)
		return (-1);
	return (ret);
}
