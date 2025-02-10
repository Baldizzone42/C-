/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:51:27 by jormoral          #+#    #+#             */
/*   Updated: 2025/02/04 16:02:18 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "Contact.hpp"

class Phonebook
{
	private:
		Contact contact[8];
	public:
		void add_contact();
		void loop();
		void searching();
		Phonebook();
		~Phonebook();
};

#endif