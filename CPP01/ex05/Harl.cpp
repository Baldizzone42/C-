/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 09:58:24 by jormoral          #+#    #+#             */
/*   Updated: 2025/02/05 10:17:47 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
}

Harl::~Harl(){
}

void Harl::debug(void)
{
	std::cout << "[DEBUG MESSAGE]" <<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";
}

void Harl::info(void)
{
	std::cout << "[INFO MESSAGE]" << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!";
}

void Harl::warning(void)
{
	std::cout << "[WARNING MESSAGE]" << "I think I deserve to have some extra bacon for free. Ive been coming for years whereas you started working here since last month.";
}

void Harl::error(void)
{
	std::cout << "[ERROR MESSAGE]" << "This is unacceptable! I want to speak to the manager now.";
}


void Harl::complain(std::string leve)
{
	
}