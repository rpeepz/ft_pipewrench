/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pipewrench.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpapagna <rpapagna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:05:48 by rpapagna          #+#    #+#             */
/*   Updated: 2019/05/22 23:42:41 by rpapagna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PIPEWRENCH_H
# define FT_PIPEWRENCH_H

# include "../libft/includes/libft.h"
# include <stdarg.h>

# define IF_THEN(X, Y) if(X) {(Y);}
# define KEY '-'

int		ft_pipewrench(char *str, ...);

#endif
