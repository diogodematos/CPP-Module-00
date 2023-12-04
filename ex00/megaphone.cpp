/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:02:13 by dcarrilh          #+#    #+#             */
/*   Updated: 2023/12/04 17:40:41 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int i = 1;
	int j;
	
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	else
	{
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] > 96 && argv[i][j] < 123)
					argv[i][j] -= 32;
				std::cout << argv[i][j];
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}