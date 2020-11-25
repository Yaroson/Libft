/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 09:40:35 by ysoroko           #+#    #+#             */
/*   Updated: 2020/11/17 14:42:43 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		start;
	char	*my_s;

	my_s = (char *)(s);
	i = 0;
	start = my_s[0];
	while (my_s[i] != '\0')
	{
		i++;
	}
	while (my_s[i] != start)
	{
		if (my_s[i] == c)
		{
			return (&my_s[i]);
		}
		i--;
	}
	if (my_s[i] == c)
	{
		return (&my_s[i]);
	}
	return (0);
}
