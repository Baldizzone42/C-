/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 09:39:43 by jormoral          #+#    #+#             */
/*   Updated: 2025/02/03 17:33:15 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(){
	this->name = "Nooooooo teeeeeengo";
	announce();
}

Zombie::Zombie(std::string name){
	this->name = name;
	announce();
}

Zombie::~Zombie(){
	std::cout << this->name << " : inmolasion" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::randomChump(std::string name)
{
	Zombie juanillo(name);
}
Zombie* Zombie::newZombie(std::string name)
{
	Zombie* Hwang = new Zombie(name);
	Hwang->name = name;
	return Hwang;
}
