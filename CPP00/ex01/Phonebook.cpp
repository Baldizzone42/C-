/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:51:52 by jormoral          #+#    #+#             */
/*   Updated: 2025/02/04 15:51:53 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

Phonebook::Phonebook(){
    this->index = 0;
    this->full_contacts = 0;
    this->total_contacts = 0;
}

Phonebook::~Phonebook(){
}

static int ft_stoi(std::string str)
{
	int i = 0;
	int res = 0;

	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return res;
}

static int only_numbers(std::string line)
{
    int i = 0;
    while(line[i])
    {
        if(!isdigit(line[i]))
            return 1;
        i++;
    }
    return 0;
}

void Phonebook::add_contact()
{
    Contact new_contact;
    std::string line;
    std::string info[5] = {"First name",
                            "Last name",
                            "Nickname",
                            "Phone number",
                            "Password"};
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Enter " << info[i] << ": ";
        if(!std::getline(std::cin, line))
        {
            std::cout << "Wrong input" << std::endl;
            return ;
        }
        if(line.empty())
            std::cout << "Try a valid input" << std::endl, i--;
        else if(i == 3 && only_numbers(line))
            std::cout << "Insert only numbers" << std::endl, i--;
        else
            new_contact.setData(line, i);
    }
    this->contact[index] = new_contact;
    this->index = (index + 1) % 8;
    if(!full_contacts && total_contacts < 8)
        total_contacts++;
    if(total_contacts == 8)
        this->full_contacts = true;
}

void Phonebook::searching()
{
    if(this->total_contacts == 0)
    {
        std::cout << "Phonebook is empty" << std::endl;
        return ;
    }
    std::cout << "----------------------------------------------------------------" << std::endl;
	std::cout << "Index | First Name      | Last Name       | Nick Name        " << std::endl;
	std::cout << "----------------------------------------------------------------" << std::endl;
    for (int i = 0; i < this->total_contacts; i++)
	{
		std::cout << std::setw(5) << i + 1 << " | ";
		std::cout << std::setw(15) << this->contact[i].getInfo(0) << " | ";
		std::cout << std::setw(15) << this->contact[i].getInfo(1) << " | ";
		std::cout << std::setw(15) << this->contact[i].getInfo(2) << std::endl;
	}
	std::cout << "\nEnter the index of the contact you want to view: ";
	int index;
	std::string input;
	if (!std::getline(std::cin, input))
	{
		if (std::cin.eof())
		{
			std::cout << "Input error. Exiting..." << std::endl;
            exit(1);
		}
	}
	if (only_numbers(input) == 0)
	{
		index = ft_stoi(input);
		if (index < 1 || index > this->total_contacts)
			std::cout << "Invalid index. Please enter a number between 1 and " << this->total_contacts << "." << std::endl;
		else
		{
			std::cout << "Contact Details:" << std::endl;
			this->contact[index - 1].getFullData();
		}
	}
	else
		std::cout << "Invalid input. Please enter a numeric index." << std::endl;
}

