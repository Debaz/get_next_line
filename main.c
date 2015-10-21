/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klescaud <klescaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 09:24:31 by klescaud          #+#    #+#             */
/*   Updated: 2015/10/21 09:43:00 by klescaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <get_next_line.h>

int		main(void)
{
	int		fd;
	char	**line;

	fd = open("./fichiertest.txt", O_RDONLY);
	get_next_line(fd, line);
	return (1);
}
