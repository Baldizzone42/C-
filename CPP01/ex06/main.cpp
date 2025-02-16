/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 09:57:58 by jormoral          #+#    #+#             */
/*   Updated: 2025/02/12 11:44:42 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;
	if(argc != 2)
		return (std::cout << "Wrong number of arguments" << std::endl), 1;
	harl.complain(argv[1]);
	return 0;
}