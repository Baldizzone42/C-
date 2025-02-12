/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:52:11 by jormoral          #+#    #+#             */
/*   Updated: 2025/02/04 15:52:12 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

Contact::Contact(){
}

Contact::~Contact(){
}

void Contact::setData(std::string str, int i){
    this->info[i] = str;
}

void Contact::getData()
{
    std::string info[5] = {"First name",
    						"Last name",
							"Nickname",
							"Phone number",
							"Password"};
    for (int i = 0; i < 5; i++)
        std::cout << info[i] << ": " << getInfo(i) << std::endl;
    std::cout << std::endl;
}

std::string Contact::getInfo(int i)
{
    if (i >= 0 && i < 5)
    {
        if(this->info[i].length() > 10)
            return (this->info[i].substr(0, 9) + ".");
        return (this->info[i]);
    }
    return ("");
}

void Contact::getFullData()
{
    std::string info[5] = {"First name",
							"Last name",
							"Nickname",
							"Phone number",
							"Secret message"};
    
    for (int i = 0; i < 5; i++)
    {
        std::cout << info[i] << ": " << this->info[i] << std::endl;
    }
    std::cout << std::endl;
}
