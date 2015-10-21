/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Debaz <klescaud@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/20 16:44:57 by Debaz             #+#    #+#             */
/*   Updated: 2015/10/21 08:51:06 by Debaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <get_next_line.h>

char	*extend_buffer(int const fd, char *buf, int *ret)
{
	char	tmp[BUFF_SIZE+ 1];
	char	tmp2;

	*ret = read(fd, tmp, BUFF_SIZE);
	tmp[*ret] = '\0';
	tmp2 = buf;
	buf = ft_strjoin(buf, tmp);
	ft_strdel(&tmp2);
	return (buf);
}

int		get_next_line(int fd, char **line)
{
	static char		*buf = "";
	char			*str;
	int				ret;

	if (!line || fd < 0)
		return (-1);
	if (buff[0] == '\0')
		buf = ft_strnew(0);
	while (ret > 0)
	{
		if ((str = ft_strchr(buf, '\n')) != NULL)
		{
			*str = '\0';
			*line = ft_strdup(buf);
			ft_memmove(buf, str + 1, ft_strlen(str + 1) + 1);
			return (1);
		}
		buf = extend_buffer(fd, buf, &ret);
	}
	free(buf);
	return (ret);
}
