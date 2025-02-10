/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:54:01 by jormoral          #+#    #+#             */
/*   Updated: 2025/02/04 16:03:05 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(int argc, char **argv)
{
	Phonebook book;
	std::string line;
	(void)argv;
	if(argc != 1)
		return (std::cout << "Error: Wrong number of arguments" << std::endl, 1);
	while(1)
	{
		std::cout << "Insert a command: | ADD | SEARCH | EXIT" << std::endl;
		std::getline(std::cin, line);
		if(std::cin.eof())
			return (std::cout << "End of line (eof) Detected, exit.."), 1;
		if (line == "ADD")
			book.add_contact();
		else if (line == "SEARCH")
			book.searching();
		else if (line == "EXIT")
			break ;
		else
			std::cout << "Try to enter a new input" << std::endl;
	}
	return 0;
}