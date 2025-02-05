/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:09:21 by jormoral          #+#    #+#             */
/*   Updated: 2025/02/04 15:29:57 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int i = 1;
	if (argc == i)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl), 1;
	while(argv[i])
	{
		int j = 0;
		while(argv[i][j])
		{
			argv[i][j] = toupper(argv[i][j]);
			std::cout << argv[i][j++];
		}
		i++;
	}
}