/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:06:13 by gtroiano          #+#    #+#             */
/*   Updated: 2023/06/10 19:51:11 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define EVEN(nb)		nb % 2 == 0
# define TRUE 1
# define FALSE 0
# define SUCCESS 0
# define EVEN_MSG       "I have an even number of arguments.\n"
# define ODD_MSG        "I have an odd number of arguments.\n"

typedef int	t_bool;

#endif
