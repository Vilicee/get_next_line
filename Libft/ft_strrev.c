/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvaara <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 17:17:49 by wvaara            #+#    #+#             */
/*   Updated: 2020/06/23 17:24:55 by wvaara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int		ii;
	char	temp;

	i = 0;
	ii = 0;
	while (str[i] != '\0')
		i++;
	i--;
	while (ii < i)
	{
		temp = str[i];
		str[i] = str[ii];
		str[ii] = temp;
		i--;
		ii++;
	}
	return (str);
}
