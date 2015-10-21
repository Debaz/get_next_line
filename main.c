/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klescaud <klescaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 09:24:31 by klescaud          #+#    #+#             */
/*   Updated: 2015/10/21 18:49:18 by Debaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <get_next_line.h>

int		main(void)
{
	int		fd;
	char	**line;
	int		ret;

	ret = 0;
	fd = open("./fichiertest.txt", O_RDONLY);
	while ((ret = get_next_line(fd, line)) > 0)
	{
//		ft_putendl(ft_strjoin("ret vaut", ft_itoa(ret)));
		ft_putendl(*line);
	}
	return (1);
}
