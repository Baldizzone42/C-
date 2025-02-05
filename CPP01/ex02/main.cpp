/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 10:10:20 by jormoral          #+#    #+#             */
/*   Updated: 2025/02/03 18:33:34 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

int main(void)
{
	std::string a = "HI THIS IS BRAIN";
	std::string *b = &a;
	std::string &c = a;
	
	std::cout << &a << std::endl;
	std::cout << b << std::endl;
	std::cout << &c << std::endl;

	std::cout << a << std::endl;
	std::cout << *b << std::endl;
	std::cout << c << std::endl;
}