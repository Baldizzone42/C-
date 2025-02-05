/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:02:01 by jormoral          #+#    #+#             */
/*   Updated: 2025/02/05 11:52:29 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <sstream>


int main(int argc, char **argv)
{
	(void)argv;
	if(argc != 4 || !argv[1][0] || !argv[2][0] || !argv[3][0])
		return (std::cout << "Wrong arguments.\n"), 1;
	std::ifstream file;
	std::stringstream buffer;
	std::string str[3];
	str[0] = argv[1];
	str[1] = argv[2];
	str[2] = argv[3];
	const char *copy = str[0].c_str();
	file.open(copy);
	if(file.is_open() == false)
		return (std::cout << "Error: bad file"), 1;
	buffer << file.rdbuf();
	std::string content = buffer.str();
	file.close();
	std::cout << "Before:\n" << content << std::endl;
	size_t pos = 0;
    while ((pos = content.find(str[1], pos)) != std::string::npos) { // buscamos en content, la cadena str1, y empezando desde pos
        content.replace(pos, str[1].length(), str[2]);
        pos += str[2].length();  // Mover la posición después del reemplazo
    }
    std::cout << "After:\n" << content << std::endl;
    return 0;
}
	//no se puede usar replace.