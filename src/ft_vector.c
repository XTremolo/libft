/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 17:09:11 by obamzuro          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2018/08/07 15:59:38 by obamzuro         ###   ########.fr       */
=======
/*   Updated: 2018/09/13 15:50:30 by obamzuro         ###   ########.fr       */
>>>>>>> d768ecb37af9914cab8881a67e02d2db4997fc4c
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		init_ftvector(t_ftvector *vec)
{
	if (!vec)
		return ;
	vec->capacity = 2;
	vec->len = 0;
	vec->elem = (void **)malloc(vec->capacity *
			sizeof(void *));
}

void		free_ftvector(t_ftvector *vec)
{
	int		i;

	i = -1;
	while (++i < vec->len)
		free(vec->elem[i]);
	free(vec->elem);
}

void		push_ftvector(t_ftvector *vec,
		void *line)
{
	void	**temp;
	int		i;

	if (!vec || !line)
		return ;
	if (vec->capacity < vec->len + 1)
	{
		vec->capacity *= 2;
		temp = (void **)malloc(vec->capacity *
			sizeof(void *));
		i = -1;
		while (++i < vec->len)
			temp[i] = vec->elem[i];
		free(vec->elem);
		vec->elem = temp;
	}
	vec->elem[vec->len] = line;
	++vec->len;
}
