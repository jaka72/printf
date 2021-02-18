/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmurovec <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 11:33:09 by jmurovec      #+#    #+#                 */
/*   Updated: 2020/10/30 11:33:09 by jmurovec      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** ADAPTED ESPECIALLY FOR FPRINT
*/

int	ft_strlen(const char *str)
{
	int i;

	if (!str)
		return (0);
	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}
