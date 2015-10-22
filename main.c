/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klescaud <klescaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 09:24:31 by klescaud          #+#    #+#             */
/*   Updated: 2015/10/22 10:24:22 by Debaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <get_next_line.h>

int		main(void)
{
	int		fd;
	char	**line;
	int		ret;

	ret = 0;
	fd = 0;
	while ((ret = get_next_line(fd, line)) > 0)
	{
		ft_putendl(*line);
	}
	return (1);
}
