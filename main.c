/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpapagna <rpapagna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:24:39 by rpapagna          #+#    #+#             */
/*   Updated: 2019/04/12 15:54:48 by rpapagna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_pipewrench.h"

int		main(void)
{
	char	*a;
	char	*b;
	char	*c;
	char	**s;
	int		i;

	a = malloc(5);
	b = malloc(5);
	c = malloc(5);
	s = malloc(sizeof(char *) * 5);
	s[0] = malloc(16);
	s[1] = malloc(16);
	s[2] = malloc(16);
	s[3] = malloc(16);
	s[4] = NULL;
	ft_strcpy(a, "hey ");
	ft_strcpy(b, "all ");
	ft_strcpy(c, "you ");
	ft_strcpy(s[0], "people wont you");
	ft_strcpy(s[1], " listen to mee\n");
	ft_strcpy(s[2], " listen to mee\n");
	ft_strcpy(s[3], " listen to mee\n");
	ft_putstr(a);
	ft_putstr(b);
	ft_putstr(c);
	ft_putstr(s[0]);
	ft_putstr(s[1]);
	ft_putstr("		^^^^^^^^^^\n\n");

	i = 0;
	i = ft_pipewrench("-s-s-s--s", a, b, c, s);
	ft_putstr("free'd items: ");
	ft_putnbr(i);
	ft_putstr("\n\n");

	a = malloc(4);
	b = malloc(4);
	c = malloc(4);
	s = malloc(sizeof(char *) * 3);
	s[0] = malloc(32);
	s[1] = malloc(96);


	system("leaks a.out");

	return (0);
}
